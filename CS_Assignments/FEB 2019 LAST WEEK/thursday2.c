#include<stdio.h>
void main()
{
	float p[3]; 
	char P; 
	float s=0, r=0, Rsum=0, Ssum=0; 
	float sum=0, SUM=0;
	float RSUM=0, SSUM=0;

	float perfect =0, imperfect=0;

	scanf("%f", &p[0]);
	while(p[0]!=-1)
	{
		scanf("%f %f %c", &p[1], &p[2], &P);
		if((p[0]>0 && (p[1]>0 && p[2]>0)) && (P=='R' || P=='S'))
		{ perfect++;
		
		if(P=='R')
		{	r++;
			sum=(1.5*(p[0]+p[1]+p[2]));
			Rsum=p[0]+p[1]+p[2];
			Ssum=0;
		}
		if(P=='S')
		{   s++;
			sum=(2*(p[0]+p[1]+p[2]));
			Ssum=p[0]+p[1]+p[2];
			Rsum=0;		
		}

		SUM=SUM+sum;
		RSUM=RSUM+Rsum;
		SSUM=SSUM+Ssum;

	}

		
		else 
		{
			imperfect++;
		}

		
		scanf("%f", &p[0]);
	}

	float averageR=(RSUM)/(r*3);
	float averageS=(SSUM)/(s*3);
	float percentage=(imperfect)/(r+s+imperfect)*100;
	float TSCORE=  (SUM) / (  (RSUM)/(r*3)+(SSUM)/(s*3)    );


	printf("\n%.3f %.3f %.3f %.3f",  averageR, averageS, percentage, TSCORE);

}
