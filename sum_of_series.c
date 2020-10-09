#include <stdio.h>
float series(int n);
float factrl(int n);
float sum = 0;
float multi = 1;
int main()
{
    printf("%f", series(7));
    return 0;
}

float series(int n){
    for(int i = 1; i <= n; i++){
        sum += i / factrl(i);
    }
    return sum;
}

float factrl(int n){
    for(int j = 1; j <= n; j++){
        multi *= j;
    }
    return multi;
}
