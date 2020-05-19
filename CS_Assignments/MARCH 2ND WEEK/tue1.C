#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

		for(int i=1; i<=n;  i++ )
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
	  
	return 0;
}
