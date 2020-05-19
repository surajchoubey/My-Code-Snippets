#include<stdio.h>
int main()
{
	int n,i,j,k,m;
	scanf("%d",&n);

	if(n%2)
	{
		for(i=1,m=n; i<=n/2+1&& m>=n/2+1 ; i++,m--)
		{
			if(i==1)
			{
				for(k=1; k<=n; k++)
					printf("*");
				
			}
			else
			{
				printf("*");
				
				
					

					for(int p=2 ; p<=n-1; ++p)
					{
						if(p==i||p==m) 
							{
								printf("*");
							}	
						else 
							{
								printf(" ");
							}	
					}


				printf("*");
			 }

			printf("\n");	
		}
		for(i=n/2,m=n/2+2; i>=1&& m<=n ; i--,m++)
		{
			if(i==1)
			{
				for(k=1; k<=n; k++)
					printf("*");
				
			}
			else
			{
				printf("*");
				
				
					

					for(int p=2 ; p<=n-1; ++p)
					{
						if(p==i||p==m) 
							{
								printf("*");
							}	
						else 
							{
								printf(" ");
							}	
					}


				printf("*");
			 }

			printf("\n");	
		}
	}
	return 0;
}