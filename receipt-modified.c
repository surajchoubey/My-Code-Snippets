#include <stdio.h>
#include <math.h>

int main()
{
	int td;
	double pt,t_d,d_t,st,total;
	char p,Y,N;
	printf("Enter purchase total");
	scanf("%lf",&pt);
	printf("Is purchaser a teacher(Y) or not(N)\n");
	scanf(" %c",&p);
	if (p == 'Y'){
		if (pt<100){
			td = 10;
		}
		else 
			td = 12;
		t_d = td/100 * pt;
		st = 5/100 * pt;
		d_t = pt - t_d;
		total = d_t + st;
		printf("Total Purchases				$%6.2f\n",pt);
		printf("Teacher's Discount(%d%%)	$%6.2f\n",td,t_d);
		printf("Discounted Total 			$%6.2f\n",d_t);
		printf("Sales Tax(5%%)				$%6.2f\n",st);
		printf("Total 						$%6.2f\n",total);
	}
	else if (p == 'N'){
		st = 5/100 * pt;
		total = pt + st;
		printf("Total Purchases				$%6.2f\n",pt);
		printf("Sales Tax(5%%)				$%6.2f\n",st);
		printf("Total 						$%6.2f\n",total);
	}
	else printf("ERROR");


}