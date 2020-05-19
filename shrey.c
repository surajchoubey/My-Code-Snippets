#include<stdio.h>

int maxrain(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c) return a;
		else return c;
	}
	else
	{
		if(b>c) return b;
		else return c;
	}
}

int minrain(int a, int b, int c)
{
	if(a<b)
	{
		if(a<c) return a;
		else return c;
	}

	else
	{
		if(b<c) return b;
		else return c;
	}
}

int main()
{

	int L80, L60, L50,a=0,b=0; char A , B;
	int perfect=0, imperfect=0;
	int Maxrain, Minrain;
	int n;
	scanf("%d",&n);

	

	
	
		
		
		for(int i=1; i<=n; i++)
		{

			
				scanf("%d %d %d %c %c", &L80, &L60, &L50, &A, &B);

				if(( L80>=0 && L80<=100) && ((L60>=0 && L60<=100) && (L50>=0 && L50<=100) &&(A=='Y'||A=='N'||A=='y'||A=='n') && (B=='Y'||B=='N'||B=='y'||B=='n')) )
				{      perfect++;
						if(i==1)
						{
							
							Maxrain=maxrain(L80,L60,L50);
							Minrain=minrain(L80,L60,L50);
							

							switch(A)
							{
								case 'Y': ++a; break;
								case 'y': ++a; break;
							}

							switch(B)
							{
								case 'Y': ++b; break;
								case 'y': ++b; break;
							}
							
						}	

				        if(i!=1)
				        {
							if(maxrain(L80,L60,L50)>Maxrain) Maxrain=maxrain(L80,L60,L50);
							if(minrain(L80,L60,L50)<Minrain) Minrain=minrain(L80,L60,L50);

							switch(A)
								{
									case 'Y': ++a; break;
									case 'y': ++a; break;
								}

							switch(B)
								{
									case 'Y': ++b; break;
									case 'y': ++b; break;
								}

			            }
			    }

			else imperfect++;

			
		

		}

	if(perfect>0)
	{
	if(a>b) printf("A\n");
	else if(b>a)  printf("B\n");
	else printf("A B\n");

	printf("Rain Metric: %d", (a+b)*(Maxrain-Minrain));
	}

	return 0;
}
