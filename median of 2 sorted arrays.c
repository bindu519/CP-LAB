#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int c[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    int total = n + m;
    double median;

    if (total % 2 == 1)
        median = c[total / 2];
    else
        median = (c[total / 2 - 1] + c[total / 2]) / 2.0;

    printf("%.1f", median);

    return 0;
}
