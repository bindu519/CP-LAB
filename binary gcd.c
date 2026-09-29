#include <stdio.h>

int binaryGCD(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if ((a % 2 == 0) && (b % 2 == 0))
        return 2 * binaryGCD(a / 2, b / 2);
    if (a % 2 == 0)
        return binaryGCD(a / 2, b);

    if (b % 2 == 0)
        return binaryGCD(a, b / 2);
    if (a > b)
        return binaryGCD((a - b) / 2,b);
    else
        return binaryGCD(a, (b - a) / 2);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", binaryGCD(a, b));

    return 0;
}
 
