#include<stdio.h>
long factorial(long m)
{	long product=1;
	while(m>=1)
	{
		product=product*m;
		m--;
	}
	return product;
}
long main()
{
	long n;
	scanf("%ld", &n);

	if(n>0)
	{

	for(long i=0,k=n; i<n&&k>0; i++,k--)
	{	
		//for spaces
		for(long j=1; j<=k-1 ; j++)
		{
			printf("\t");
		}

		

		
		
		for(long p=0; p<=i; p++)
		{
			
			printf("%ld\t\t", factorial(i)/(factorial(p)*factorial(i-p)));
		}
		
		printf("\n");

	}

}
	return 0;
}