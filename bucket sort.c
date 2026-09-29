#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    float x = *(float *)a;
    float y = *(float *)b;

    if (x > y) return 1;
    if (x < y) return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    float a[n];
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i]);

    float bucket[n][n];
    int count[n];

    for (int i = 0; i < n; i++)
        count[i] = 0;


    for (int i = 0; i < n; i++) {
        int index = a[i] * n;
        bucket[index][count[index]] = a[i];
        count[index]++;
    }

    for (int i = 0; i < n; i++) {
        qsort(bucket[i], count[i], sizeof(float), compare);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < count[i]; j++) {
            printf("%.2f ", bucket[i][j]);
        }
    }

    return 0;
}
