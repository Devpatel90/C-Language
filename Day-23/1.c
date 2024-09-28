#include <stdio.h>
int sum(int arr[], int size);
int main() {
  int arr[50];
  int n,sum;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter %d elements for the array:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  sum = sumArray(arr, n);

  printf("The sum of all elements in the array is: %d\n", sum);

  return 0;
}

int sum()
{
 int total = 0;
  for (int i = 0; i < size; i++) {
    total += arr[i];
  }
  return total;
}