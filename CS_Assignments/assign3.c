/*
Created by Suraj Choubey
2019B4PS0667G
All Rights Reserved
*/

#include<stdio.h>


int power(int a, int b)
{
	int product=1;

	for(int i=1; i<=b; i++)
	{
		product=product*a;
	}	
	return product;
}

int main()
{
	int arr[100],binary[100];
	long n;

	printf("Enter number of elements: ");
	scanf("%ld", &n);

	printf("\nEnter %ld elements: ",n);
	for(int q=0; q<n; q++) 
		{
			scanf("%d", &arr[q]);
			binary[q]=0;
		}	
		
	int p=n;
	int q=power(2,n);
	int j;

	for(int i=0; i<q; i++) 
	{	
		

		printf("\n{  ");

	
			int k=i; 
			j=p-1;

			while(k>0)
			{
				binary[j]=k%2;
				k=k/2;
				j--;
			}
		

		
		for(j=0; j<p; j++ )
		{
			if(binary[j]==1) 
			{
				printf(" %d ,", arr[j] );
			}
		}	
		
		printf(" }");
	}	


	return 0;
}

