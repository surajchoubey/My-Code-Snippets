#include<stdio.h>

void main()
{
 int n;
scanf("%d", &n);
if(n)
{	       for(int k=n; k>=1; k--)
		{
		//part1 spaces1
		for(int i=2*(k-1); i>=1; i--) printf("_");
		//part 1 triangle

		for(int j=1; j<=(2*(n-k+1)-1); j++ ) 
		{
			if(j<(2*(n-k+1)-1))printf("*_");
			else printf("*");
		}
		//part1 spaces2
		for(int i=2*(k-1); i>=1; i--) printf("_");
	
		//gapper		
                printf("__");

		//part2 spaces1
	        for(int i=2*(k-1); i>=1; i--) printf("_");
		
		//part 2 triangle
		for(int j=1; j<=(2*(n-k+1)-1); j++ ) 
		{
			if(j<(2*(n-k+1)-1))printf("*_");
			else printf("*");
		}
		//newline
		printf("\n");
                }

}

		

		
		
}
