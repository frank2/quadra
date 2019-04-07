#include "quadra/logic.h"

#ifdef __cplusplus
using namespace Quadra;
#endif

qubit_state_t
qnot
(qubit_state_t x)
{
   /* lol this is really funny... it does the same thing */
   return ~x & sC;
}

qubit_state_t
qop
(qubit_state_t x, qubit_state_t y, quadrean_op_t op)
{
   /* what happens here? weird stuff */

   switch (x)
   {
   case sN:
      return y;
      break;

   case sC:
      if (op == oX) /* if XOR, perform the XOR operation, otherwise, return C */
         return qnot(y);
      else
         return x;

      break;

   case sF:
   case sT:
      switch(y)
      {
      case sN:
         return x;
         break;
         
      case sC:
         if (op == oX)
            return qnot(x);
         else
            return y;

         break;

      case sF:
      case sT:
         if (x == y)
         {
            if (op == oX)
               return sN;
            else
               return x;
         }
         else if (op == oA)
            return sF;
         else
            return sT;

         break;
      }
      break;
   }
}

bool
bop
(qubit_state_t x, qubit_state_t y, logic_op_t op)
{
   switch(op)
   {
   case oO:
      if (x || y) return true;
      else return false;
   case oA:
      if (x && y) return true;
      else return false;
   case oX:
      if (x ^ y) return true;
      else return false;
   }
}
