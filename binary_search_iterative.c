// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[100],n;
    printf("how many elements are there in tha array :");
    scanf("%d",&n);
    printf("Enter the %d elements of the data \n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %dth element : ", i);
        scanf("%d",&array[i]);
    }
    int x;
    printf("what you want to find : ");
    scanf("%d",&x);
//   int x = 4;
  int result = binarySearch(array, x, 0, n-1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}