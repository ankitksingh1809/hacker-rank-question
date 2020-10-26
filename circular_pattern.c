#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int p = 2*n - 2;
    int q = 2*n - 2;
    int r = 0;
    int s = 0;
  	int matrix[2*n-1][2*n-1];
    int u = n;
    while(u > 0){
        for(int j = r; j <= p; j++){
            matrix[s][j] = u;
        }
        s++;
        for(int j = s; j <= q; j++){
            matrix[j][p] = u;
        }
        p--;
        for(int j = p; j >= r; j--){
            matrix[q][j] = u;
        }
        q--;
        for(int j = q; j >= s; j--){
            matrix[j][r] = u;
        }
        r++;
        u--;
    }
    for(int i = 0;i <= (2*n - 2); i++){
        for(int j = 0; j <= (2*n - 2); j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
