#include<stdio.h>

float predict(float x,float b0,float b1){
    return (b1*x)+b0;
}

float mean_squared_error(const int n,float x[],float y[],float b0,float b1){
    float sum=0.0f;
    for (int i=0; i<n; i++){
       float prediction=predict(x[i],b0,b1);
       float error=prediction-y[i];
       sum+=(error*error);
    }
    return sum/n;
}

float train(const int n,float learning_rate,float x[],float y[],float *b0,float *b1,const int epoches){
    for(int epoch=0; epoch<epoches; epoch++){
        float db0=0.0f;
        float db1=0.0f;
        for(int i=0; i<n; i++){
            float prediction=predict(x[i],*b0,*b1);
            float error=prediction-y[i];

            db0+=error;
            db1+=(error*x[i]);
        }

        //differentiation
        db0=(2/n)*db0;
        db1=(2/n)*db1;

        *b0=*b0-(learning_rate*db0);
        *b1=*b1-(learning_rate*db1);
        if(epoch%100==0){
            float loss=mean_squared_error(n, x,y,*b0,*b1);
            printf("At epoch %d The loss is %.2f ,the value of b1 is %.2f ,and the value of b2 is %.2f",epoch,loss,b1,b0);
        }
    }
}



int main(void){
float x[]={1,2,3,4,5,6,7,8};
float y[]={10,20,30,40,50,60,70,80};

const int n=8;
const int epoches=1000;

float b0=0.0f;
float b1=0.0f;

float mse=mean_squared_error(n,x,y,b0,b1);

float learning_rate=0.001;

train(n,learning_rate,x,y,&b0,&b1,epoches);

float test_value=3.5f;

float predicted_value=0.0f;

predicted_value=predict(test_value,b0,b1);
printf("The predicted is %.2f",predicted_value);
return 0;

}