#include <stdio.h>
int main()
{
    int i = 1;
    int p[3];
    int l = 0;
    int sum = 0;
    int m;
    
    while(i <= 500){
        int j = i;
        
            while(j > 0){
                for(m = 0; m <= 2; m++){
                p[m] = j % 10;
                j = j / 10;
                l += 1;
            }
        }
        for(int k = 0; k < l; k++ ){
            sum += p[k]*p[k]*p[k];
        }
        if(sum == i){
            printf("%d", i);
            }
    i++;
    }
    return 0;
}