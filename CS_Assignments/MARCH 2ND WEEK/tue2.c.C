#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d", &n);

		for(i=1; i<=n;  i++ )
		{
			int sum=i*(i+1)/2;
			printf("%d", sum);
			--sum;

			for(int j=i-1; j>=1; --j,--sum)
			{
				printf("-%d", sum);
				
			}
			printf("\n");
	    }
	    for(i=n-1; i>=1;  i-- )
		{
			int k=1+i*(i-1)/2;
			printf("%d", k);
			--k;

			for(int j=i; j>=2; --j,--k)
			{
				printf("-%d", k);
				
			}
			printf("\n");
	    }
	  
	return 0;
}
