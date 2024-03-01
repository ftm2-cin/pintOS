#ifndef OPERATIONS_H
#define OPERATIONS_H

#define FLOAT_SHIFT_AMOUNT 17
#define F 16384

typedef int float_type;

// A para float
// B para int

#define INT_TO_FLOAT(B) ((float_type)(B * F))
#define FLOAT_TO_INT(A) (A / F)  
#define FLOAT_ADD(A, B) (A + B)
#define FLOAT_ADD_MIX(A, B) (A + (B * F))
#define FLOAT_SUB(A, B) (A - B)
#define FLOAT_SUB_MIX(A, B) (A - (B * F))
#define FLOAT_MULT_MIX(A, B) (A * B)
#define FLOAT_DIV_MIX(A, B) (A / B)
#define FLOAT_MULT(A, B) ((float_type)(((int64_t) A) * B / F))
#define FLOAT_DIV(A, B) ((float_type)((((int64_t) A) * F) / B))
#define FLOAT_INT_PART(A) (A >> FLOAT_SHIFT_AMOUNT)
#define FLOAT_ROUND(A) ((A) >= 0 ? ((A) + (F) / 2) / (F) : ((A) - (F) / 2))

#endif /* threads/operations.h */