#include <stdio.h>
// perform the bubble sort

void bubbleSort(int array[], int size) 
{
  // loop to access each array element
  int i,j;
  for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if (array[i] > array[j]) 
	 		{
        		int temp = array[i];
        		array[i] = array[j];
        		array[j] = temp;
			}
		}
	}
}
void printArray(int array[], int size) {
  int i;
  for (i = 0; i <size ;i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() 
{
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
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size); 
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}
