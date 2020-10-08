#include <stdio.h>

int sum;
int f(int o);
int noc;
int i, j, k, l, m, n;
int main()
{
    
    scanf("%d", &sum);
    int min_coin = f(1);
    int temp;
    for(i = 0; i <= f(1); i++){  // sum 
        for(j = 0; j <= f(2); j++){ //sum/2
            for(k = 0; k <= f(5); k++){
                for(l = 0; l <= f(10); l++){
                    for(m = 0; m <= f(50); m++){
                        for(n = 0; n <= f(100); n++){
                            if(i*1 + j*2 + k*5 + l*10 + m*50 + n*100 == sum)
                            {
                                temp = i+j+k+l+m+n;
                                if(temp < min_coin)
                                    min_coin = temp;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", min_coin);
    return 0;
}

int f(int o){
    noc = sum / o;
    return noc;
}
