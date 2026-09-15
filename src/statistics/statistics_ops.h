#ifndef STATISTICS_H
#define STATISTICS_H

float return_min(float* vec,const int dim);
float return_max(float* vec,const int dim);
float mean(float * arr,const int ttl);
float var(float * arr,const int ttl);
float std(float * arr, const int ttl);
float covariance(float* list_a,int ttl_a, float* list_b,int ttl_b);
float correlation(float* list_a,float* list_b,const int ttl);
#endif