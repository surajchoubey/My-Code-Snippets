#include<stdio.h>
int main()
{
	int i,n,k;
	scanf("%d", &n);


	for(i=1,k=n; i<=n && k>=1; ++i, k--)
	{
		for(int j=1; j<=k-1; j++)
		{
			printf("\t");
		}
		int p=k;
		for(int m=1; m<=i; m++)
		{
			printf("%d\t\t", n*p);
			p=p+2;
		}
		printf("\n");
	}
	return 0;
}
