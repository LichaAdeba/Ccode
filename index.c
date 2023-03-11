#include <stdio.h>
float addfloat(float x, float y){
    return x + y;
}

int main(){
    float x = 0.8;
    float y = 0.9;
    float total = addfloat(x,y);
    printf("The total is %f\n\n ", total);
    return 0;
}
