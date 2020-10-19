#include <stdio.h>
int fibonacci(int n){
    int fibonacci1[25];
    fibonacci1[0] = 1;
    fibonacci1[1] = 1;
    fibonacci1[n - 1] = fibonacci(n - 2) + fibonacci(n  - 3);
    return fibonacci1[n - 1];
}
int main() {
    for(int i = 1; i<= 25; i++){
        printf("%d", fibonacci(i));
    }
    return 0;
}
