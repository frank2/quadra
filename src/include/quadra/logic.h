#ifndef __QUBIT_LOGIC_H
#define __QUBIT_LOGIC_H

#ifdef __cplusplus
namespace Quadra
{
   extern "C"
   {
#endif

#include <stdbool.h>
#include <quadra/qubit.h>

/* a q-prefixed function returns a quadrean state. a b-prefixed function returns a boolean state. */

      typedef enum __logic_op_t
      {
         oO = 0,
         oA = 1,
         oX = 2
      } logic_op_t;

      qubit_state_t qnot(qubit_state_t x);
#define bnot(x) qnot(x)

      qubit_state_t qop(qubit_state_t x, qubit_state_t y, logic_op_t op);

#define qand(x, y) qop(x, y, oA)
#define qor(x, y) qop(x, y, oO)
#define qxor(x, y) qop(x, y, oX)

      bool bop(qubit_state_t x, qubit_state_t y, logic_op_t op);

#define band(x, y) bop(x, y, oA)
#define bor(x, y) bop(x, y, oO)
#define bxor(x, y) bop(x, y, oX)

#ifndef __cplusplus
   }
}
#endif

#endif
