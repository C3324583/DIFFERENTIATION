#include <stdio.h>

float diff(float x, float h);
float f(float x);

int main(){
    float h = 0.0001;

    printf("%f\n", diff(0, h));
    printf("%f\n", diff(1, h));
    printf("%f\n", diff(-1, h));
}

float f(float x){
    float f = x*x + 2*x - 1;
    return f;
}

float diff(float x, float h){
    float fx = f(x);
    float fxh = f(x+h);
    float d = (fxh - fx) / h;
    return d;
}
