#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int a[n];
 for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
scanf("%d", &m);
    int b[m];
 for(int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int result[n + m];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(a[i] <= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }
    while(i < n)
        result[k++] = a[i++];
    while(j < m)
        result[k++] = b[j++];
    for(i = 0; i < n + m; i++)
        printf("%d ", result[i]);

    return 0;
}
