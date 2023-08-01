#include<stdio.h>
binarySearch(int arr[], int first, int last, int key)
{
	int mid = (first + last)/2;
	while(first <= last)
	{
		if (arr[mid] < key)
		{
			first = mid + 1;
		}
		else if (arr[mid] == key)
		{
			printf("%d Element is found at index: ",mid);
			break;
		}
		else
		{
			last = mid - 1;
		}
		mid = (first + last)/2;
	}
	if (first > last)
	{
		printf("Element is not found!");
	}
}
int main()
{
	int arr[100];
	int n,i,j;
	int key;	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Enter the Key element to search in the array: ");
	scanf("%d",&key);
	int last=n-1;
	binarySearch(arr,0,last,key);
}
