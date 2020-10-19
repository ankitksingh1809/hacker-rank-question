#include <stdio.h>

int beq(int n){
    int beq1[500];
    int howMany = 0;
    while(n > 0){
        
            beq1[howMany] = n % 2;
            n = n / 2;
            howMany += 1;
    
    }
    for(int j = howMany-1; j >= 0; j--){
        printf("%d", beq1[j]);
    }
}

int main() {
    int n;
    printf("Enter the no. and see the magic");
    scanf("%d", &n);
    beq(n);
    return 0;
}
