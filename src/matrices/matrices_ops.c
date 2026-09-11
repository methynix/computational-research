#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

float** create_matrix(const int rows,const int cols){
float** mtx=malloc(rows*sizeof(float*));
for(int i=0; i<rows; i++){
    mtx[i]=malloc(cols*sizeof(float));
}
return mtx;
}

void free_matrix(float **mtx,const int rows){
    if(mtx==NULL){
        return;
    }
    for(int i=0; i<rows; i++){
        free(mtx[i]);
    }
    free(mtx);
}

void print_matrix(const int rows,const int cols,float** mtx){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%f",mtx[i][j]);
            printf("\n");
        }
    }
}

float** add_matrix(float** mtx_a, float** mtx_b,const int rows,const int cols,float** result){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
 result[i][j]=mtx_a[i][j]+mtx_b[i][j];
        }
    }
    return result;
}

float** minus_matrix(float** mtx_a, float** mtx_b,const int rows,const int cols,float** result){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            result[i][j]=mtx_a[i][j]-mtx_b[i][j];
        }
    }
    return result;
}

float** scalar_multi(const float scalar,float** mtx,float** result,const int rows,const int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            result[i][j]=scalar*mtx[i][j];
        }
    }
    return result;
}

float** transpose_matrix(const int rows,const int cols,float** mtx, float** result){
for(int i=0; i<rows; i++){
    for(int j=0; j<rows; j++){
        result[i][j]=mtx[j][i];
    }
}
return result;
}

float** matrix_mul(const int rows_A,const int cols_A,const int rows_B,
                                                const int cols_B, float** mtx_a, float** mtx_b,float** result){
if(cols_A!=rows_B){
    printf("ERROR %d Multiplication is impossible because the number of columns of A is not equal to the number of rows of B",errno);
    return -1
}
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
                                                                      
    }
}
}

int main(){
    return 0;
}