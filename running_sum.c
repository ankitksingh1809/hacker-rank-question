#include <stdio.h>

int rs(int n){
    int rs1;
    if(n == 1){
        rs1 = 1;
    }else{
        rs1 = rs(n - 1) + n;
    }
    return rs1;
}

int main() {
    printf("%d", rs(25));
    return 0;
}
