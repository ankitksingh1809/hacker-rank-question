#include <stdio.h>

int beq1[300];
int i = 0;

void rd(int p);

void beq(int n){
    rd(n);
}

void rd(int p){
    if(p != 0){
        beq1[i] = p % 2;
        p = p / 2;
        i++;
        rd(p);
    }
}

int main() {
    int o;
    printf("Enter the no.\n");
    scanf("%d", &o);
    beq(o);
    for(int j = i - 1; j >= 0; j--){
        printf("%d", beq1[j]);
    }
    return 0;
}
