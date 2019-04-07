#ifndef __QUBIT_H
#define __QUBIT_H

#ifdef __cplusplus
#define QCPP(x) Quadra::x

namespace Quadra
{
   extern "C"
   {
#else
#define QCPP(x)
#endif

#include <stdint.h>


#define IS_BIG_ENDIAN (*(uint16_t *)"\0\x2" != 0x200)
#define IS_LITTLE_ENDIAN !IS_BIG_ENDIAN
      typedef enum __qubit_state_t
      {
         sN = 0, /* nothing state */
         sF = 1, /* false state */
         sT = 2, /* true state */
         sC = 3 /* contradiction state */
      } qubit_state_t;

      typedef enum __qubit_polarity_t
      {
         pN = 0,
         pB = 1,
         pA = 2,
         pX = 3,
         pV = 4
      } qubit_polarity_t;

/* technically a qubit can be defined as "uint8_t qubit:2" but lol bitfields only apply to structs, so... */

      typedef uint8_t qube_b2_t;
      typedef uint16_t qbyte_b2_t;
      typedef uint32_t qword_b2_t;
      typedef uint64_t qdword_b2_t;

      typedef union __qube_t
      {
         qube_b2_t base2;

         struct
         {
#if IS_BIG_ENDIAN == 1
            uint8_t lr:2, ll:2, ur:2, ul:2;
#else
            uint8_t ul:2, ur:2, ll:2, lr:2;
#endif
         } base4;
      } qube_t;

      typedef struct __qdigit_t
      {
         qubit_polarity_t polarity;

         union
         {
            union
            {
               struct
               {
#if IS_BIG_ENDIAN == 1
                  qube_b2_t top, upper, middleUpper, middle, lowerMid, lower, lowerBottom, bottom;
#else
                  qube_b2_t bottom, lowerBottom, lower, lowerMid, middle, middleUpper, upper, top;
#endif
               } qubes;
               struct
               {
#if IS_BIG_ENDIAN == 1
                  qbyte_b2_t top, middle, lower, bottom;
#else
                  qbyte_b2_t bottom, lower, middle, top;
#endif
               } bytes;
               struct
               {
#if IS_BIG_ENDIAN == 1
                  qword_b2_t top, bottom;
#else
                  qword_b2_t bottom, top;
#endif
               } words;

               qdword_b2_t dword;
            } base2;

            qube_t base4[8];
         } data;
      } qdigit_t;

      /* TODO typedef struct __qfloat_t {} qfloat_t; */

#ifdef __cplusplus
   }
}
#endif

#endif
