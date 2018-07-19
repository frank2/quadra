# Quadra
## wat

Let me take you on a weird adventure.

On the second iteration of Noah's Ark, I was unable to trip my balls off with the animals, so I got really fucking bored. So I started thinking: hmmmm. Why doesn't logic allow for a contradictory state? Apparently, this is what happens when I'm sober and not tripping my balls off, yet everyone around me is.

I actually never took a swing at implementing this because I thought it was absolutely fucking stupid. It makes no goddamn sense--yet at the same time it does! So. I don't know, man. It's fucking weird. See if you can follow along with my fucked up logic.

## Logic

Welcome to my weird-ass math. This is not really supposed to make sense, but for some reason, it makes sense. It's really stupid and literally defies the concept of logic. It's "made up" so to speak, so it doesn't really mean anything. Don't read too much into it. But be warned! It's fucking weird!

Because we've introduced two states into a binary system, we now have a quadrary system, in which there are not just two states, but rather, four states. Though they can still be represented in the traditional binary fashion.

Qubit Value | Qubit Label
----------- | -----------
{0} | {N} nothing
{1} | {F} false
{2} | {T} true
{3} | {C} contradiction

I wonder if this is just a probability system. Boolean logic doesn't seem to work all that cleanly with how it relates to contradictions. It's like the answer to the "is the glass half-full or half-empty" question. All that question does is attempt to measure whether you're an optimist or pessimist. Yet, the question is misleading, because the glass is in a permanent state of being full because there's no concept of a void in our minds. So we can't technically perceive that which we can't see. By the way, spoilers: the glass is always full of air. Oxygen. A million pairings of two hydrogen atoms and an oxygen atom. Again, we cannot perceive the concept of nothing.

There's some strange human tendency to want to simply pick one or the other. To demand a decision of sorts. What if it's not necessarily decidable? Perhaps computation should also contain a statistical system of sorts?

Whatever's going on in this language I have no fucking clue, but it's really fun to write.

Truth Table (NOT) | {~}
----------------- | ---
N | C
F | T
T | F
C | N

The NOT table seems to work exactly how you'd expect it to.

The opposite of nothing is effectively everything. yet, everything is a contradiction-- it contains true as well as false by definition, not to mention what's in everything is also nothing, so the opposite of nothing then is everything, which is a contradiction, as it also contains nothing.

Not false is true, not true is false. This is pretty simple.

If everything is a contradiction, then its opposite is nothing, because nothing contains... nothing, whereas everything contains nothing as well as everything else.

Truth Table (OR) {\|} | N | F | T | C
-------------------- | - | - | - | ---
N | N | F | T | C
F | F | F | T | C
T | T | T | T | C
C | C | C | C | C

Nothing or something is always that something. as when something isn't there, that's only when you know it's nothing. But nothing is, in fact, something-- the inversion of a contradiction, which is nothing, which is itself a contradiction, but from a different perspective.

False or false is false, false or false is true, but false or a contradiction is a contradiction, because a contradiction is simultaneously false and true.

True or nothing is true, true or false is true, true or true is true, and true or a contradiction is a contradiction.

Anything or a contradiction is always a contradiction.

Truth Table (AND) {&} | N | F | T | C
--------------------- | - | - | - | ---
N | N | F | T | C
F | F | F | F | C
T | T | F | T | C
C | C | C | C | C

If you have nothing and something, it's always that something, in the same sense that a contradiction and something is always a contradiction. The traditional boolean truth table is untouched.

Truth Table (XOR) {x} | N | F | T | C
--------------------- | - | - | - | ---
N | N | F | T | C
F | F | N | T | T
T | T | T | N | F
C | C | T | F | N

The "exclusive-or" table is pretty much the same, with exclusion being taken into account with regards to
contradictions and nothingness.

With two sets of nothing, the ultimate exclusive content is nothing, as nothing is nothing no matter what. However, performing an XOR operation on nothing and something, since it's still an OR operation, will result in that something. Though do consider, in the same sense that `3 {x} 2 == 1` (because `0b11 {x} 0b10 == 0b01`), XORing a contradiction with anything will result in that something's inversion. In effect, for a given state Y, `C {x} Y` is the equivalent of `~Y`. Additionally, in the same sense that `2 {x} 2 == 0` (because `0b10 {x} 0b10 == 0b00`), `F {x} F == N`, because falsehoods are something as opposed to nothing, and thus produce nothing when excluded from one another.

I think we can get to weird math now-- that was just weird boolean logic (which I guess is actually quadrean logic).

## Weird Mathematics

Before we start with the weird math, though, we need to understand the concept of *polarization*, which is similar to polarization in traditional mathematics.

### Polarity

In traditional mathematics there are what are considered two poles-- positive and negative. with, weirdly, 0 not being allowed to contain any polarization, which is what always made 1's compliment so funny, because in 1's compliment of binary, there's technically a negative 0 and a positive 0.

In my absolutely idiotic math, in fact, there are *four poles* with a transitional state of nothingness between all of them.

```
               +---------------+
               | X / Crossed   |
+--------------+---------------+--------------+
| - / Negative | N / Nothing   | + / Positive |
+--------------+---------------+--------------+
               | V / Divergent |
               +---------------+
```

When a number is polarized in one way or another, performing an operation with a polarized version of itself does not necessarily result in an inversion of itself. For example, traditionally, `-6 {*} -6` would be the equivalent of `6 {*} 6`, because "a negative times a negative equals a positive." In this system, a negative times a negative is technically still a *negative*, in the same sense that a positive times a positive is always a *positive*. This works transitively across the poles: a crossed times a crossed is a crossed number, a divergent number times a divergent number is, again, a divergent number.

A crossed polarization is quite literal-- a hypothetical state in which the number is both positive and negative. Its opposite is divergent-- a contradiction of polarization, in which the number is polarized but not polarized. I still have no fucking clue where these in particular will lead. Nothing is still unsigned-- though not because it's impossible, but more because it's superfluous. Everything leads to nothing. `x0` is equal to `+0` because unlike other values, 0 is the same value across all poles.

With that in mind, let's cover numbers and mathematics.

## Addition and Subtraction

Addition and subtraction works the same way, so long as you respect the polarization of numbers.

Let's walk through some basic addition exercises.

### `n1 {+} n1 = n2`

So, technically, these would be hypothetical numbers because they are all contradictions. `n0` is superfluous, but `n1` is not a number, because by definition of it being 1, it's officially something, making it not nothing. You add one nothing to another nothing, and you get two nothings, even if it's nothing. You have two of them, after all! Two nothings. Which is still nothing, isn't it?

#### `+1 {+} -1 = 0`

Because `+` and `-` are opposing operators, result is a sort of cancellation of energy at the fulcrum, as `+1` and `-1` are perfectly opposed energies, resulting in nothing. In traditional mathematics, this is equivalent to the statement "1 - 1 = 0," though in a really stupid and excitingly autistic way, this feels really fun, verbose and clear.
 
### `+5 {+} -2 = +3`

Since `+` and `-` are opposing poles, they can still be added together to get opposing effects. For example, in traditional mathematics, 5 - 2 is 3, just as in this situation here. The same rules apply when adding `x` and `v` polarized numbers. However, answers become complicated when adding across polarities.

### `+5 {+} x2 {+} -7 {+} v8 {+} n4 = (n4, -2, v6)`

PEMDAS rules still apply for some reason. Why? I have no clue. I'm literally just making all of this up as I go along and spitballing what feels right. I'm trying to throw down nonsense proofs, but, let's face it folks, I'm just leading you in a circle with every "proof" I offer you.

So we can actually evaluate the problem like this.

### `[[[[+5 {+} x2] {+} -7] {+} v8] {+} n4] = (n4, -2, v6)`

So, step by step, `+5 {+} x2 = (+5, x2)`. Meaning, we can add the tuple `(+5, x2)` to the resulting formula, since this chunk can't yet resolve.

### `[[[(+5, x2) {+} -7] {+} v8] + n4] = (n4, -2, v6)`

The result of `(+5, x2) {+} -7` is ultimately `(-2, x2)`, because only opposing polarity can be added together. Then, recycle your data:

### `[[(-2, x2) {+} v8] {+} n4] = (n4, -2, v6)`

`v` polarizes `x`, so now we have a tuple of the value `(-2, v6)`. Plug that back into our formula and we get this.

### `[(-2, v6) {+} n4] = (n4, -2, v6)`

Because `n4` is not technically a number, it cannot be resolved, and thus this formula cannot be resolved any further. And so, the answer to this formula is the triplet of `(n4, -2, v6)`. Yet, of course, anything that is nothing is superfluous unless you're measuring nothing for some weird reason, so, really, the answer is `(-2, v6)`. I guess. I don't know. Again, I'm literally just throwing nonsense out here.

Boy I hope you're ready for the next one.

## Multiplication and Division

So with multiplication and division, you can consider it iterations of subtractions or addition, dependent on the polarity of the number. Let's take a very common multiplication problem.

### `+2 {*} +2 = +4`

This is because `+2 {*} +2` resolves out to `+2 {+} +2`. In my stupid multiplication rules that I'm literally making up as I go along and also to mess with your head, multiplication is implicitly "take this base and add it to itself this many times." So, let's complicate things a little bit.

### `+6 {*} +12 = +72`

This is because this formula resolves out to `+6 {+} +6 {+} +6 {+} +6 {+} +6 {+} +6 {+} +6 {+} +6 {+} +6 {+} +6 {+} +6 {+} +6` whose result is `+72`. Now, what about with negative numbers? I have no idea. Let's wing it.

### `-6 {*} -3 = 12`

This is where, I guess, negative iterations come in? It's just subtraction, hahaha. Instead of stepping forwards so many times you're stepping backwards so many times. So, assuming `abs(-3)` as the number of steps, we get `-6 {+} -6 {+} -6`. However, it's supposed to be negative steps. So... okay, I guess it's subtraction then. Which would be `-6 {-} -6 {-} -6`. Stepping backwards is really weird-- you step backwards with a backwards number and you actually mean "step forwards." So, in effect, `-6 {*} -3` is just `-6 {+} +6 {+} +6`, as stepping backwards a backwards amount of times is just, like, a moonwalk I guess. You're still going forward, dude.

It's just an off-by-one anyway, 'cause you did the wrong operation, ya doofus. What you're looking for is probably `-6 {*} *3*`, which gives you `-18`, which is so much more logical, right? Because `-6 {+} -6 {+} -6` is `-18`, since no polarity is inverted.

I'm going to resume this later when my brain stops hurting.