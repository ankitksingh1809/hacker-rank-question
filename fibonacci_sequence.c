#include <stdio.h>

int fibonacci1[25];

void fibonacci(int n){
    fibonacci1[0] = 1;
    fibonacci1[1] = 1;
    for(int i = 2; i < n; i++){
         fibonacci1[i] = fibonacci1[i - 1] + fibonacci1[i- 2];
    }
    
}
int main() {
    fibonacci(25);
    for(int i = 0; i<= 24; i++){
        printf("%d\n", fibonacci1[i]);
    }
    return 0;
}
