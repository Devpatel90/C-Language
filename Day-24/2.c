#include <stdio.h>
int sumarr(int arr[], int size);
void main() 
{
  int arr[50];
  int n,sum;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter %d elements for the array:\n", n);
  for (int i=0;i<n;i++) 
  {
    scanf("%d", &arr[i]);
  }

  sum = sumarr(arr, n);

  printf("The sum of all elements in the array is: %d\n", sum);

  return 0;
}

int sumarr(int arr[],int size)
{
    int tot=0;
    for (int i = 0; i < size; i++) 
    {
       tot += arr[i];
    }
    return tot;
}