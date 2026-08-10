//sort a array given by a user by using bubble sort
#include <stdio.h>

//time complexity - O(n^2)
//[7   5   6   2   1]
// j  j+1

void bubblesort(int arr[],int n)
{
	for (int i=0; i<n-1;i++){
		for (int j =0; j<n-1-i;j++){
			if(arr[j]>arr[j+1])
			{
				//swap elements
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
}


int main()
{
	int n;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements: \n", n);
	for (int i =0; i<n;i++){
	scanf("%d",&arr[i]);
	}
	
	bubblesort(arr,n);

	printf("sorted array: ");
	for (int i =0; i<n;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
