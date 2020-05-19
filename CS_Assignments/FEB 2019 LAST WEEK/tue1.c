#include<stdio.h>
int main()
{
	int T; float H; char S; float Tmax=0, Tmin=0, Hsum=0, Tsum=0; 
	int Highcount=0,Lowcount=0;
	int perfect=0, imperfect=0;

	scanf("%d", &T);
	if(T!=-1)
	{
		Tmax=T;
		Tmin=T;
	}
	while(T!=-1)
	{	
		scanf("%f %c",&H,&S);

		if((T>0 && H>0) && (S=='H'||S=='L') )
		{
			perfect++;
			Hsum=Hsum+H;
			Tsum=Tsum+T;

				switch(S)
				{
					case 'H': Highcount++; break;
					case 'L' : Lowcount++; break;
				}
			

			if(T>Tmax) Tmax=T;
		    else if(T<Tmin) Tmin=T;
		}
		else imperfect++;

		scanf("%d",&T);
		
	}

	float bushfire=(2*Tsum+3*Hsum+Highcount-Lowcount)/perfect;
	printf("%.2f\n",bushfire);

	if((Highcount-Lowcount)>3) printf("High\n");

	else if((Lowcount-Highcount)<-3) printf("Low\n");
	else printf("Average\n");

	printf("%.2f\n", Hsum/perfect);
	printf("%.2f\n", (Tmax+Tmin)/2);


	return 0;
}
