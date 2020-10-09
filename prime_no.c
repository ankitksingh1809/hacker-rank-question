#include <stdio.h>
int main()
{
    int i;
    int j;
    printf("%d\n", 2);
    for(i = 3; i <= 300; i++)
    {
        for(j = 2; j <= i - 1; j++)
        {
            if(i % j != 0)
            {
                if(j == i - 1)
                {
                    printf("%d\n", i);
                }else{
                    continue;
                }
            }else{
                break;
                }
        }
    }
    return 0;
}
