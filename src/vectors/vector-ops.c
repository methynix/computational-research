#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <math.h>

#define EMBED_LENGTH 3
#define VOCABULARY_SIZE 10

//vector dotproduct/scalar product
float dot_product(const float* vec_a,const float* vec_b,const int dim,float sum){
   sum=0.0f;
    for(int i=0; i<dim; i++){
        sum+=vec_a[i] * vec_b[i];
    }
    return sum;
}

//scalar multiplication
float* scalar_mul(const float scalar,const float* vec,const int dim,float* result){

    for(int i=0; i<dim; i++){
        result[i]=scalar*vec[i];
    }
    return result;
}

//normalizing a vector
float* normalize_vector( float* vec,const int dim){
    float max=FLT_MAX;
    for(int i=0; i<dim; i++){
        if(vec[i]>max){
            max=vec[i];
        }
    }

    //find the minimum
    float min=FLT_MIN;
    for(int i=0; i<dim; i++){
        if(vec[i]>min){
            min=vec[i];
        }
    }
    
    for(int i=0; i<dim; i++){
    vec[i]=(vec[i]-min)/(max-min);
    }
    return vec;
}

//euclidian distance
float euclidean(const float a,const float b,const int dim){
    float sum=0.0f;
    for(int i=0; i<dim; i++){
        float diff=a-b;
        sum+=diff*diff;
    }
    return sqrtf(sum);
}

//printing lines for formatting
void print_lines(){
    for(int i=0; i<=50; i++){
        printf("-");
    }
    printf("\n");
}

//vocabulary mapping
typedef struct{
    char word[30];
    float embed[EMBED_LENGTH];
}Vocabulary;

//defining the available  vocabularies
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

int main(){
    return 0;
}