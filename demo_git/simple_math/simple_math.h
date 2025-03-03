/** \file simple_math.h
    \brief Simple math functions
    \author Loris Costanzo
*/

// regola da applicare per ogni .h

#ifndef SIMPLEMATH // se non è mai stato definito definisci questo simbolo
#define SIMPLEMATH

float mean(int a, int b);
int max(int a, int b);

typedef struct complex_int
{
    int re;
    int imm;
} cx_int_t;

typedef struct complex_float
{
    float re;
    float imm;
} cx_float_t;

cx_float_t cx_mean(cx_int_t a, cx_int_t b);

#endif