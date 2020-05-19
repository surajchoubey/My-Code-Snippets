/*
Created by Suraj Choubey
2019B4PS0667G
All Rights Reserved
*/

#include<stdio.h>
int main()
{
	int arr[100],n;
	printf("Enter number of elements(>=3): ");
	scanf("%d", &n);

	printf("\nEnter %d elements: ",n);
	for(int q=0; q<n; q++) scanf("%d", &arr[q]);

	int min=arr[0]+arr[1]+arr[2];
	int max=arr[n-1]+arr[n-2]+arr[n-3];


	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			for(int k=j+1; k<n; k++)
			{
				printf("\n{ %d , %d , %d}", arr[i],arr[j],arr[k]);				
			}
		}
	}
	

	return 0;
}