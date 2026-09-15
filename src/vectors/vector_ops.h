#ifndef VECTOR_OPS_H
#define VECTOR_OPS_H
#define EMBED_LENGTH 3
#define VOCABULARY_SIZE 10

typedef struct{
    int size;
    double *data;
}Vector;

typedef struct{
    char word[30];
    float embed[EMBED_LENGTH];
}Vocabulary;

void print_lines();
void print_vector(float* vec, const int dim);
float* add_vectors(float* vec_a, float* vec_b, float* result, const int dim);
float* minus_vectors(float* vec_a,float* vec_b,float* result,const int dim);
Vector create_vector(const int SIZE);
void free_vector(Vector* v);
float dot_product(const float* vec_a,const float* vec_b,const int dim,float sum);
float* scalar_mul(const float scalar,const float* vec,const int dim,float* result);
#endif

