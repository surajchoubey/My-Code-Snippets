/*
Created by Suraj Choubey
2019B4PS0667G
All Rights Reserved
*/

#include<stdio.h>
int main()
{
	int arr[100],n;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("\nEnter %d elements: ",n);
	for(int q=0; q<n; q++) scanf("%d", &arr[q]);

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<n; k++)
			{
				printf("\n{ %d , %d , %d}", arr[i],arr[j],arr[k]);
			}
		}
	}

	return 0;
}