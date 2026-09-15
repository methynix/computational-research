#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
return sum;
}

float var(float * arr,const int ttl){
    float mn=mean(arr,ttl);
    float sum_var;
    for(int i=0; i<ttl; i++){
       sum_var+= arr[i]-mn;
    }
    return sum_var;
}

float std(float * arr, const int ttl){
  float sd=var(arr,ttl);
  return sd;
}

float covariance(float* list_a,const int ttl_a, float* list_b,const int ttl_b){
float mean_a=mean(list_a,ttl_a);
float mean_b=mean(list_b,ttl_b);
for(int i=0; i<ttl_a; i++){

}
for(int i=0; i<ttl_b; i++){

}
}

float correlation(float* list_a,const int ttl_a, float* list_b,const int ttl_b){
    float cov=covariance( list_a,ttl_a,  list_b,ttl_b);
    return cov/(std(list_a,ttl_a)*std(list_b,ttl_b));
}
int main(){

    return 0;
}