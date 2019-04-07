#!/usr/bin/env python

__all__ = ['QubitError', 'QubitParsingError', 'QubitRangeError', 'QubitBadStateError'
           ,'Qubit']

class QubitError(Exception):
    pass

class QubitParsingError(QubitError):
    pass

class QubitRangeError(QubitError):
    pass

class QubitBadStateError(QubitError):
    pass

class QubitState(object):
    def __init__(self, state, polarity=None):
        self.state = state.upper()

        if not self.state in 'NFTC':
            raise QubitBadStateError('state {} not of N, F, T or C'.format(self.state))

class Qubit(object):
    def __init__(self, value=None):
        if isinstance(value, int):
            self.parse_int(value)
        else:
            self.parse_string(value)

    @property
    def polarity(self):
        return self.signage

    @property
    def state(self):
        return self.value

    def parse_int(self, value):
        if not isinstance(value, int):
            raise QubitParsingError('value must be an integer')

        if value < -3 or value > 3:
            raise QubitRangeError('qubit integer value must be -3 <= x <= 3')

        mapping = {-3: '-C'
                   ,-2: '-T'
                   ,-1: '-F'
                   ,0: 'N'
                   ,1: '+F'
                   ,2: '+T'
                   ,3: '+C'}

        self.parse_string(mapping[value])

    def parse_string(self, value):
        if value is None:
            self.value = 'N'
            self.signage = None

        if not isinstance(value, str):
            raise QubitParsingError('value needs to be a string')

        value = value.upper()

        if value.startswith('+') or value.startswith('-'):
            self.signage = value[0]
            value = value[1]
        else:
            self.signage = None

        if not value in 'NFTC':
            raise QubitParsingError('qubit value must be one of: N, F, T or C')

        self.value = value

        if self.value in 'FT' and self.polarity is None:
            raise QubitParsingError('{} must be positive or negative, not unsigned'.format(self.value))

    def __repr__(self):
        return '<Qubit: {}/{}>'.format(str(self), int(self))

    def __str__(self):
        if self.polarity is None:
            return self.value

        return '{}{}'.format(self.polarity, self.state)

    def __int__(self):
        if self.state is 'N':
            if self.polarity is '-':
                return -float('inf')
            elif self.polarity is '+':
                return float('inf')
            else:
                return 0

        if self.state is 'C':
            if self.polarity is '-':
                return -3
            elif self.polarity is '+':
                return 3
            else:
                return float('nan')

        if self.state is 'F' or self.state is 'T':
            if self.polarity is None:
                raise QubitBadStateError('state {} must be positive or negative, not unsigned'.format(self.state))
            
            mapping = {'F': 1, 'T': 2}[self.state]
            return mapping * (1 if self.polarity is '+' else -1)
