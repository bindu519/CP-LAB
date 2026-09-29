#include <stdio.h>
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
 int A, B, T;
scanf("%d %d %d", &A, &B, &T);

 if (T <= (A > B ? A : B) && T % gcd(A, B) == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
