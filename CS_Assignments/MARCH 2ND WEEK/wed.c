#include<stdio.h>

void main()
{
 int n;
scanf("%d", &n);
if(n)
{		for(int k=n; k>=1; k--)
		{
		
			
			for(int i=2*(k-1); i>=1; i--) printf("_");

			for(int j=1; j<=(2*(n-k+1)-1); j++ ) 
			{
			if(j<(2*(n-k+1)-1))
			
				printf("*_");
			
			else printf("*");   
     
			
			
			}
			printf("\n");
                }
}
		
}
