// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // agar mid hi apna answer ho to wahi pr return kr dena hai
    if (array[mid] == x)
      return mid;

    // agar mid se niche hai to left side wala serach krna hai
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // agar mid se upar hai to right side wala karna hai
    return binarySearch(array, x, mid + 1, high);
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
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
