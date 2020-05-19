/*
Created by Suraj Choubey
2019B4PS0667G
All Rights Reserved
*/


#include<stdio.h>

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
 
 int count=0;

void permute(int a[], int start, int end)
{
  if (start == end)
  {  
      for(int p=0 ; p<=end; p++)printf("%d ", a[p]);
      printf("\n");
  }
  else
  {
    for (int i = start; i <= end; i++)
    {
 		    swap((a+start), (a+i)); 
        for(int p=0 ; p<=end; p++)printf("-%d-", a[p]); 
        permute(a, start+1, end); 
        swap((a+start), (a+i));
        for(int p=0 ; p<=end; p++)printf("-%d-", a[p]); 
    }
  }   
}


int main()
{
	int arr[100],q,i[100];
	int n;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("\nEnter %d elements: ", n );
		
		for(q=0; q<n; q++) 
		{
			scanf("%d", &arr[q]);
		}

	permute(arr,0,n-1);

	return 0;
}

