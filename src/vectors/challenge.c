/*Andika function inayochukua vector ya dimension 5 na kuireverse (kubadilisha mpangilio).

Andika program ambayo inachukua vectors mbili za dimension 4, inaziongeza, kisha inazidisha matokeo kwa scalar 2.0.

*/
#include <stdio.h>

#define DIM1 5
#define DIM2 4
#define SCALAR 2.0f

float* reverse(float * vec){
    for (int i=0; i<DIM1; i++){
        vec[i]=vec[DIM1-i-1];
    }
    return vec;
}

float* ops(const float* vec1,const float* vec2,float* result){
    float sum[DIM2]={};
    for(int i=0; i<DIM2; i++){
        sum[i]=vec1[i]+vec2[i];
    }

    for(int i=0; i<DIM2; i++){
     result[i]=sum[i]*SCALAR;
    }
    return result;
}

void print_vector(const float* vec,const int n){
    for(int i=0; i<n; i++){
        printf("%.2f",vec[i]);
    }
}

int main(){
    float vec1[]={1.2f,1.0f,0.0f};
    float vec2[]={1.0f,2.0f,3.0f};
    float to_be_reversed[]={1.2f,4.3f,4.1f,1.7f,1.5f};
    float op_result[3]={};
    printf("The reverse of our vector");
    print_vector(reverse(vec1),DIM1);
    printf("The operations conducted on our vector");
    print_vector(ops(vec1,vec2,op_result),DIM2);
    return 0;
}