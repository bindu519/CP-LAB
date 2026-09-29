#include <stdio.h>

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);

    int a = i, b = j;

    if (i > j)
    {
        int t = i;
        i = j;
        j = t;
    }

    int max = 0;

    for (int k = i; k <= j; k++)
    {
        long long n = k;
        int count = 1;

        while (n != 1)
        {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = 3 * n + 1;

            count++;
        }

        if (count > max)
            max = count;
    }

    printf("%d %d %d", a, b, max);

    return 0;
}
