#include <stdio.h>
#include <string.h>

int main() {
    int n, p;
    char str[30] = "Working with strings is fun";
    int q = strlen(str);
    printf("Enter the position and upto what you want to print\n");
    scanf("%d%d", &n, &p);
    if(p == 0){
        for(int i = (n - 1); i <= (q - 1); i++){
            printf("%c", str[i]);
        }
    }else{
        for(int i = (n - 1); i <= (n - 2 + p); i++){
            printf("%c", str[i]);
        }
    }
    return 0;
}
