#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
 int arr[n];
 for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
int curr_sum = arr[0];
int max_sum = arr[0];
 for (int i = 1; i < n; i++){
if (arr[i] > arr[i - 1])
curr_sum=curr_sum+arr[i];
else
curr_sum = arr[i];
 if (curr_sum > max_sum)
         max_sum = curr_sum;
    }
 printf("%d", max_sum);
return 0;
}
