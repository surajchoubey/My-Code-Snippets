#include<stdio.h>

void main()
{
	int n;
	scanf("%d", &n);
	

	if(n)
	{
		for(int i=1,k=n; i<=n&&k>=1; i++,k--)
		{
			if(i!=1)
			{
				for(int z=1; z<=i; z++) printf("%d-", z);
					
			
				for(int a=i-1; a>=2; a-- ) printf("%d-", a);
				
			}

			for(int j=1; j<=k-1; j++ ) printf("%d-", j);

		    printf("%d", k);

			for(int p=k-1; p>=1; p-- ) printf("-%d", p);

			printf("\n");

		}
}

}
