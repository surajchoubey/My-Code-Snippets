#include<stdio.h>

void main()		

{
int n;
scanf("%d", &n);


for(int i=1,k=n; i<=n&&k>=1; i++,k--)
		{
			for(int m=1; m<=i-1; m++) printf("----");

			for(int j=1; j<=k-1; j++ ) printf("%d-", j);

		    printf("%d", k);

			for(int p=k-1; p>=1; p-- ) printf("-%d", p);

			printf("\n");

		}


}
