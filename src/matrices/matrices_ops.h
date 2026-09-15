#ifndef MATRICES_OPS
#define MATRICES_OPS

float** create_matrix(const int rows,const int cols);
void free_matrix(float **mtx,const int rows);
void print_matrix(const int rows,const int cols,float** mtx);
float** add_matrix(float** mtx_a, float** mtx_b,const int rows,const int cols,float** result);
float** minus_matrix(float** mtx_a, float** mtx_b,const int rows,const int cols,float** result);
float** scalar_multi(const float scalar,float** mtx,float** result,const int rows,const int cols);
float** transpose_matrix(const int rows,const int cols,float** mtx, float** result);
float** matrix_mul(const int rows_A,const int cols_A,const int rows_B,
                                                const int cols_B, float** mtx_a, float** mtx_b,float** result);
#endif