#include <stdio.h>
#include <math.h>

void pf(int n){
    int nos = 1;
    int primes[(int) (sqrt(n) + 1)];
    primes[0] = 2;
    
    for(int i = 2; i <= (int) (sqrt(n) + 1); i++){
        for(int j = 2; j <= (i -1); j++){
            if(i % j == 0){
                break;
            }else if(i % (i - 1) != 0){
                
                primes[nos] = i; 
                nos += 1;
            }
        }
    }
    while(n > 1){
        for(int i = 0; i <= nos - 1; i++){
            if(n % primes[i] == 0){
                printf("%d", primes[i]);
                n = n / primes[i];
                
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the no.");
    scanf("%d", &n);
    pf(n);
    
    return 0;
}
