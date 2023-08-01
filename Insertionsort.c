#include <stdio.h>
// Function to print an array
void printArray(int array[], int size) {
  int i;	
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
void insertionSort(int array[], int size) {
  int i;
  for (i=0; i < size; i++) {
    int key = array[i];
    int j = i;
    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (array[j-1]>key && j >= 0) {
      array[j + 1] = array[j];
      j--;
    }
    array[j ] = key;
  }
}
int main() {
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int data[n];
	int i;
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}
