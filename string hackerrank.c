#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int lps(char s[], int i, int j)
{
    if (i == j)
        return 1;

    if (i > j)
        return 0;

    if (s[i] == s[j])
        return 2 + lps(s, i + 1, j - 1);

    return max(lps(s, i + 1, j), lps(s, i, j - 1));
}

int main()
{
    char s[1001];

    scanf("%s", s);

    int n = strlen(s);

    printf("%d", lps(s, 0, n - 1));

    return 0;
}
