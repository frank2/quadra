#ifndef __QUADRA_MATH_H
#define __QUADRA_MATH_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <quadra/logic.h>
#include <quadra/qubit.h>

   typedef struct __qubit_result_t
   {
      qubit_state_t value;

      struct
      {
         qubit_state_t overflow;
         qubit_polarity_t polarity;
      } sideEffects;
   };

   typedef struct __qdigit_result_t
   {
      qdigit_t value;
      qdigit_t overflow;
   } qdigit_result_t;

   typedef struct __qfunction_result_t
   {
      qdigit_result_t traditional, contradictory, nothingness;
   } qfunction_result_t;
