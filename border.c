#include<stdio.h>

int main()
{
	int n,i,k,j;
	scanf("%d", &n);

	for(i=1,k=n; i<=n&&k>=1; i++,k--)
	{
		for(j=n; j>k; j--)
		{
			printf("%d ",j);
		}
		for(int m=1; m<=2*k-1 ; m++)
		{
			printf("%d ", k);
		}
		for(j=k+1; j<=n; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=2,k=n; i<=n&&k>=2; i++,k--)
	{
			for(j=n; j>=i; j--)
			{
				printf("%d ", j);
			}
			for(int m=1; m<=2*i-3; m++)
			{
				printf("%d ", i);
			}
			for(j=i; j<=n; j++)
			{
				printf("%d ", j);
			}	

	
		printf("\n");
	}

	return 0;
}
