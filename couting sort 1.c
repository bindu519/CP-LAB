#include <stdio.h>
int main(){
 int n;
 scanf("%d", &n);
int arr[n];
 int count[101] = {0};
for(int i = 0; i < n; i++)
    {
scanf("%d", &arr[i]);
count[arr[i]]++;
    }
 for(int i = 0; i <= 100; i++)
    {
  for(int j = 0; j < count[i]; j++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
