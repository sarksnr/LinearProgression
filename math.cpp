#include "math.h"

float mean(float *data, int length){
    float total = 0;
    for(int i=0; i<length; i++){
        total += data[i];
    }
    return total/length;
}

float total_sum_of_square(float *data,int length){
    float mean_value = mean(data, length);
    float total = 0;
    float residual;

    
    for(int i = 0 ; i < length; i++){
        residual = (data[i] - mean_value);
        total = total + (residual*residual);
    }
    return total;
}

float residual_sum_of_square(float *yPred, float *yTrue, int length){
    float total = 0;
    float residual;

    for(int i = 0 ; i < length; i++){
        residual = (yTrue[i] - yPred[i]);
        total = total + (residual*residual);
    }
    return total;
}

int r2(float *yPred, float *yTrue, int length){
    float total = total_sum_of_square(yTrue, length);
    float residual = residual_sum_of_square(yPred, yTrue, length);
    return 1 - (residual / total);
}


float mean_squared_error(float *y_pred, float *y_true, int length){
    return residual_sum_of_square(y_pred,y_true,length)/length;
}
