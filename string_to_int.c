#include <stdio.h>

int main() {
    char str[4] = "124";
    int a = str[0] - 48, b = str[1] - 48, c = str[2] - 48;
    int d = a * 100 + b * 10 + c;
    printf("%d", d);
    return 0;
}
