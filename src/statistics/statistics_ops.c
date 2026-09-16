#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>

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

float mean(float * arr,const int ttl){
    float sum=0;
    for(int i=0; i<ttl; i++){
        sum+=arr[i];
    }
return (sum/ttl);
}

float var(float * arr,const int ttl){
    float mn=mean(arr,ttl);
    float sum_var;
    for(int i=0; i<ttl; i++){
       sum_var+= (arr[i]-mn)*(arr[i]-mn);
    }
    return (sum_var/ttl);
}

float std(float * arr, const int ttl){
  return sqrtf(var(arr,ttl));
}

float covariance(float* list_a, float* list_b,const int ttl){
float mean_a=mean(list_a,ttl);
float mean_b=mean(list_b,ttl);
float summation=0.0;
for(int i=0; i<ttl; i++){
summation +=(list_a[i]-mean_a)*(list_b[i]-mean_b);
}
return summation/(ttl-1);
}

float correlation(float* list_a,float* list_b,const int ttl){
    float cov=covariance( list_a,  list_b,ttl);
    return cov/(std(list_a,ttl)*std(list_b,ttl));
}

float** correlation_matrix(float** result,const int ttl,const int n_vars,...){
 va_list args;
 va_start(args,ttl);

 float* variables[n_vars];

 for(int i=0; i<n_vars; i++){
variables[i]=va_arg(args,float*);
 }

 for(int i=0; i<n_vars; i++){
    for (int j=0; j<n_vars; j++){
 result[i][j]=correlation(result[i],result[j],ttl);
    }
 }

va_end(args);
 return result;
}

int main(){

    return 0;
}