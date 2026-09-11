#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include<errno.h>
#include<stdlib.h>
#include "vector_ops.h"

void print_lines(){
    for(int i=0; i<=50; i++){
        printf("-");
    }
    printf("\n");
}

void print_vector(float* vec,const int dim){
for(int i=0; i<dim; i++){
    printf("%.2f",vec[i]);
}
}

float* add_vectors(float* vec1,float* vec2,float* result,const int dim){
for(int i=0; i<dim; i++){
    result[i]=vec1[i]+vec2[i];
}
return result;
}

float* minus_vectors(float* vec1,float* vec2,float* result,const int dim){
for(int i=0; i<dim; i++){
    result[i]=vec1[i]-vec2[i];
}
return result;
}

Vector create_vector(const int size){
Vector v;
v.size=size;
v.data=malloc(size*sizeof(double));
return v;
}

void free_vector(Vector *v){
free(v->data);
v->size=0;
v->data=NULL;
}

float dot_product(const float* vec_a,const float* vec_b,const int dim,float sum){
   sum=0.0f;
    for(int i=0; i<dim; i++){
        sum+=vec_a[i] * vec_b[i];
    }
    return sum;
}

float* scalar_mul(const float scalar,const float* vec,const int dim,float* result){

    for(int i=0; i<dim; i++){
        result[i]=scalar*vec[i];
    }
    return result;
}

float return_min(float* vec,const int dim){
float min=vec[0];
    for(int i=0; i<dim; i++){
        if(vec[i]<min){
            min=vec[i];
        }
    }
    return min;
}

float return_max(float* vec,const int dim){
float max=vec[0];
    for(int i=0; i<dim; i++){
        if(vec[i]>max){
            max=vec[i];
        }
    }
    return max;
}

float* normalize_vector( float* vec,const int dim){
    
float min=return_min(vec,dim);
float max=return_max(vec,dim);
    
    for(int i=0; i<dim; i++){
    vec[i]=(vec[i]-min)/(max-min);
    }
    return vec;
}

float get_magnitude(float *vec,const int dim){
    float sum=0.0;
for(int i=0; i<dim; i++){
    sum+=(vec[i]*vec[i]);
}
return sqrtf(sum);
}

float euclidean(float* a,float* b,const int dim){
    float sum=0.0f;
    for(int i=0; i<dim; i++){
        float* diff;
        diff[i]=a[i]-b[i];
        sum+=diff[i]*diff[i];
    }
    return sqrtf(sum);
}


Vocabulary vocs[VOCABULARY_SIZE]={
    {"dog",    {45.6f, 32.0f, 43.2f}},
    {"cat",    {46.7f, 31.5f, 42.8f}},
    {"puppy",  {44.9f, 33.1f, 43.7f}},
    {"kitten", {46.2f, 30.8f, 42.3f}},

    {"car",    {12.4f, 78.9f, 25.6f}},
    {"truck",  {13.1f, 80.2f, 27.3f}},
    {"bus",    {11.8f, 77.5f, 26.4f}},

    {"apple",  {67.3f, 15.6f, 88.2f}},
    {"banana", {68.1f, 16.2f, 87.5f}},
    {"orange", {66.8f, 14.9f, 89.1f}}
};

float* get_embed(char str[]){
for(int i=0; i<VOCABULARY_SIZE; i++){
    if(strcmp(str,vocs[i].word)==0){
    return vocs[i].embed;
    }
}
return NULL;
}
