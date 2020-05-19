#include<stdio.h>
int main()
{
	int n,i,k,m;

	scanf("%d", &n);
	if(n%2)
	{
		for(i=1,k=n/2; i<=n/2&&k>=1; i++,k--)
		{
			//spaces
			for(m=1; m<=k ; m++)
			{
				printf(" ");
			}
			for(m=1; m<=2*i-1; m++)
			{
				if(m==1 || m==2*i-1)
					printf("*");
				else if(m==i) printf("*");

				else printf(" ");
			}
			printf("\n");
		}
		for(i=1; i<=n; i++) printf("*"); printf("\n");

		for(i=1,k=n/2; i<=n/2&&k>=1; i++,k--)
		{
				//spaces
			for(m=1; m<=i ; m++)
			{
				printf(" ");
			}
			for(m=1; m<=2*k-1; m++)
			{
				if(m==1 || m==2*k-1)
					printf("*");
				else if(m==k) printf("*");

				else printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}
