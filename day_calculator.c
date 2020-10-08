#include <stdio.h>

int main()
{
    int sum = 0;
    int year;
    int i;
    scanf("%d", &year);
    if(year == 2001){
        sum += 0;
    }else if(year == 2002){
        sum += 365;
    }else {
        sum += 365;
    }
    for(i = 2002; i <= year - 1; i++){
        if(i % 4 == 0){
            if(i % 100 == 0 && i % 400 == 0){
                sum += 366;
            }else if(i % 100 == 0 && i % 400 != 0){
                sum += 365;
            }else{
                sum += 366;
            }
            
        }
        else{
            sum += 365;
        }
    }
    switch(sum % 7){
        case 0 : 
        printf("Monday");
        break;
        case 1 :
        printf("Tuesday");
        break;
        case 2 : 
        printf("Wednesday");
        break;
        case 3 : 
        printf("Thursday");
        break;
        case 4 : 
        printf("Friday");
        break;
        case 5 : 
        printf("Saturday");
        break;
        case 6 : 
        printf("Sunday");
        break;
    }
    
    return 0;
}
