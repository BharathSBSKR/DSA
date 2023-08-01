#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	int i,key;
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key element to search\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("the key element is present at the index %d:",i);
		}
	}
}
