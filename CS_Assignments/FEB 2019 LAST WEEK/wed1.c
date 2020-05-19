#include<stdio.h>
int main()
{
	int n,i,d;

	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{   
		int k=n*i+(i-1);
		for(int j=1; j<=i; j++)
		{
			printf("%d ", k);
			k++;
		}	
		printf("\n");
	
	}
	for(i=n-1; i>=1; i--)
	{
		int k=n*i+(i-1);
		for(int j=i; j>=1; j--)
		{
			printf("%d ", k);
			k++;
		}	
		printf("\n");		
	}

	return 0;
}