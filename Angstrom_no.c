#include <stdio.h>
int main()
{
    int i = 1;
    int p[3];
    
    int sum = 0;
    while(i <= 500){
        int j = i;int l = 0;int m=0, sum=0;
            while(j > 0){
                p[m] = j % 10;
                j = j / 10;
                l += 1;
                m++;
            }
        for(int k = 0; k < l; k++){
            sum += p[k]*p[k]*p[k];
        }
        if(sum == i){
            printf("%d\n", i);
            }
    i++;
    }
    return 0;
}
