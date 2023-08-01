#include <stdio.h>
// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(int array[], int size) {
  int step,i;
  for (step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (i = step + 1; i < size; i++) {
      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}
// function to print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
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
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}
