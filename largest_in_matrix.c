#include <stdio.h>

int largest(int *n){
    int largest1 = *n;
    for(int i = 1; i <= 15; i++){
        if(*(n + i) >= largest1){
            largest1 = *(n + i);
        }
    }
    return largest1;
}

int main() {
    int matrix[4][4] ={
        {1, 2, 3, 25},
        {4, 56, 67, 55},
        {12, 13, 54, 44},
        {66, 12, 13, 34}
    };
    printf("%d", largest (matrix));
    return 0;
}
