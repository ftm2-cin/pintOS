#ifndef OPERATIONS_H
#define OPERATIONS_H

#define F 16384

typedef int float_type;

// A para float
// B para int

#define INT_TO_FLOAT(B) (((B) * (F)))
#define FLOAT_TO_INT_ZERO(A) ((A) / (F))  // NAO FUNCIONA
#define FLOAT_TO_INT_NEAR(A) ((A) >= 0 ? ((A) + (((F) / 2) / (F))) : ((A) - ((F) / 2)) / (F)) //FUNCIONANDO
#define FLOAT_ADD(A, B) ((A) + (B)) // FUNCIONANDO
#define FLOAT_ADD_MIX(A, B) ((A) + ((B) * (F)))
#define FLOAT_SUB(A, B) ((A) - (B))
#define FLOAT_SUB_MIX(A, B) ((A) - ((B) * (F)))
#define FLOAT_MULT_MIX(A, B) ((A) * (B))
#define FLOAT_DIV_MIX(A, B) ((A) / (B))
#define FLOAT_MULT(A, B) ((((int64_t) (A)) * (B) / (F)))
#define FLOAT_DIV(A, B) (((((int64_t) (A)) * (F)) / (B)))


#endif /* threads/operations.h */