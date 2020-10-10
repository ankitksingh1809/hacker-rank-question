#include <stdio.h>
void roman(int n);
int temp = 5000;
int tempo[7];

int main() {
    int num;
    scanf("%d", &num);
    roman(num);
    
    return 0;
}

void roman(int n){
    for(int a = 0; a<= 5; a++){
        for(int b = 0; b<= 10; b++){
            for(int c = 0; c<= 50; c++){
                for(int d = 0; d<= 100; d++){
                    for(int e = 0; e<= 500; e++){
                        for(int f = 0; f<= 1000; f++){
                            for(int g = 0; g<= 5000; g++){
                                if(a*1000 + b*500 + c*100 + d*50 + e*10 + f*5 + g*1 == n){
                                    if(a + b + c + d + e + f + g < temp){tempo[0] = a;
                                    tempo[1] = b;
                                    tempo[2] = c;
                                    tempo[3] = d;
                                    tempo[4] = e;
                                    tempo[5] = f;
                                    tempo[6] = g;
                                        temp = a + b + c + d + e + f + g;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(int h = 1; h <= tempo[0]; h++){
        printf("M");
    }
    for(int h = 1; h <= tempo[1]; h++){
        printf("D");
    }
    for(int h = 1; h <= tempo[2]; h++){
        printf("C");
    }
    for(int h = 1; h <= tempo[3]; h++){
        printf("L");
    }
    for(int h = 1; h <= tempo[4]; h++){
        printf("X");
    }
    for(int h = 1; h <= tempo[5]; h++){
        printf("V");
    }
    for(int h = 1; h <= tempo[6]; h++){
        printf("I");
    }
}
