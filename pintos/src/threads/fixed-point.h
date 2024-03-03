#ifndef OPERATIONS_H
#define OPERATIONS_H

#define F 16384

typedef int float_type;

// Convert an integer (B) to a fixed-point float
#define INT_TO_FLOAT(B) ((B) * (F))

// Convert a fixed-point float (A) to an integer (rounded towards zero)
#define FLOAT_TO_INT_ZERO(A) ((A) / (F))

// Convert a fixed-point float (A) to an integer (rounded to the nearest
// integer)
#define FLOAT_TO_INT_NEAR(A) ((A) >= 0 ? ((A) + (F / 2)) / (F) : ((A) - (F / 2)) / (F)) 

// Add two fixed-point floats (A and B)
#define FLOAT_ADD(A, B) ((A) + (B))

// Add a fixed-point float (A) and an integer (B)
#define FLOAT_ADD_MIX(A, B) ((A) + ((B) * (F)))

// Subtract two fixed-point floats (A and B)
#define FLOAT_SUB(A, B) ((A) - (B))

// Subtract an integer (B) from a fixed-point float (A)
#define FLOAT_SUB_MIX(A, B) ((A) - ((B) * (F)))

// Multiply two fixed-point floats (A and B)
#define FLOAT_MULT_MIX(A, B) ((A) * (B))

// Divide a fixed-point float (A) by an integer (B)
#define FLOAT_DIV_MIX(A, B) ((A) / (B))

// Multiply a fixed-point float (A) by an integer (B) and return the result as
// an integer
#define FLOAT_MULT(A, B) ((((int64_t)(A)) * (B)) / (F)) /*#define FLOAT_MULT(A, B) ((((int64_t)(A)) * (B) / (F)))*/

// Divide a fixed-point float (A) by an integer (B) and return the result as an
// integer
#define FLOAT_DIV(A, B) (((((int64_t)(A)) * (F)) / (B)))



#endif /* threads/operations.h */
