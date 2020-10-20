#include <stdio.h>

int main() {
    int matrix[4][4]={
        {2, 3, 4, 5},
        {8, 4, 5, 6},
        {9, 11, 6, 7},
        {10, 12, 13, 8}
    };
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j<= 3; j++){
            if(i <= j){
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j<= 3; j++){
            printf("%d", matrix[i][j]);
        }
    }
    return 0;
}
