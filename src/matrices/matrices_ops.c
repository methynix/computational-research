#include <stdio.h>
#include <stdlib.h>

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
            printf(%)
        }
    }
}

int main(){
    return 0;
}