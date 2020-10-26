#include <stdio.h>

void checkSym(int **p){
    int sum;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            if(i >= j){
                if(p[i][j] = p[j][i]){
                sum = 0;
                }else{sum = 1;
                    break;
                }
            }
        }
        if(sum == 1){
            printf("This is not a symmetric matrix");
            break;
        }
    }
    if(sum == 0){
        printf("This is a symmetric matrix");
    }
}

int main() {
    int matrix[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    checkSym(matrix);
    return 0;
}
