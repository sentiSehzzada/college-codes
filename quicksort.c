// Quick sort in C

#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  
  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      i++;
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    
    quickSort(array, low, pi - 1);
    
    quickSort(array, pi + 1, high);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
    int data[100],n;
    printf("how many elements are there in tha array :");
    scanf("%d",&n);
    printf("Enter the %d elements of the data \n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %dth element : ", i+1);
        scanf("%d",&data[i]);
    }
  
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
