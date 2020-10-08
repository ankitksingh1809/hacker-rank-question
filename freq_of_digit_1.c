#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char num[1001];
    scanf("%s", num);
    int len;
    len = strlen(num);
    int arr[10]={0};

    for(int i = 0; i < len; i++){
        // if(num[i] - '0' == 0){
        //     arr[0] += 1;
        // }
        if(num[i]>='0' && num[i]<='9')
        {
            int diff=num[i] - '0';
            arr[diff] +=1;
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
