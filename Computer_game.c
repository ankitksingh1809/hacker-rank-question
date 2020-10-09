#include <stdio.h>
int main()
{
    int enNo;
    scanf("%d", &enNo);
    while(enNo != 21){
        printf("your entered no. is : %d\n", enNo);
        scanf("%d", &enNo);
    }
    if(enNo == 21){
        printf("You lost");
    }
}
