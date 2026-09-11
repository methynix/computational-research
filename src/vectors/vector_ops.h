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

Vector create_vector(const int SIZE);
#endif

