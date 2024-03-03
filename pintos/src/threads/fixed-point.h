#ifndef OPERATIONS_H
#define OPERATIONS_H

#define F 16384

typedef int float_type;

// Converte um inteiro (B) para um float de ponto fixo
#define INT_TO_FLOAT(B) ((B) * (F))

// Converte um float de ponto fixo (A) para um inteiro
#define FLOAT_TO_INT_ZERO(A) ((A) / (F))

// Converte um float de ponto fixo (A) para um inteiro, arredondando para o inteiro mais próximo
#define FLOAT_TO_INT_NEAR(A) ((A) >= 0 ? ((A) + (F / 2)) / (F) : ((A) - (F / 2)) / (F)) 

// Adiciona dois floats de ponto fixo (A e B)
#define FLOAT_ADD(A, B) ((A) + (B))

// Adiciona um float de ponto fixo (A) e um inteiro (B)
#define FLOAT_ADD_MIX(A, B) ((A) + ((B) * (F)))

// SSubtraia dois floats de ponto fixo (A e B)
#define FLOAT_SUB(A, B) ((A) - (B))

// Subtrai um inteiro (B) de um float de ponto fixo (A)
#define FLOAT_SUB_MIX(A, B) ((A) - ((B) * (F)))

// Multiplica dois floats de ponto fixo (A e B)
#define FLOAT_MULT_MIX(A, B) ((A) * (B))

// Divide um float de ponto fixo (A) por um inteiro (B)
#define FLOAT_DIV_MIX(A, B) ((A) / (B))

// Multiplica dois floats de ponto fixo (A e B) e retorna o resultado como um inteiro
#define FLOAT_MULT(A, B) ((((int64_t)(A)) * (B)) / (F)) 

// Divide dois floats de ponto fixo (A e B) e retorna o resultado como um inteiro
#define FLOAT_DIV(A, B) (((((int64_t)(A)) * (F)) / (B)))


#endif /* threads/operations.h */
