#include<stdio.h>

void main() 
{   int a[3], marker[3]={0,0,0}, perfect=0, imperfect=0,future_costs[]={1000,800,400}, total_future_costs=0;
    scanf("%d", &a[0]);

    while(a[0]!=-1)
    {
        scanf("%d %d", &a[1] , &a[2]);

        if((a[0]>=1 && a[0]<=3) && (a[2]>0))
        {
            perfect++;

            if(a[0]==1)
            { marker[0]++;
              printf("%d\n",future_costs[0]);
              total_future_costs+=future_costs[0];
            } 
            else if(a[0]==2) 
            {
              marker[1]++;
              printf("%d\n",future_costs[1]);
              total_future_costs+=future_costs[1];
            } 
            
            else if(a[0]==3)
             { marker[2]++;
              printf("%d\n",future_costs[2]);
              total_future_costs+=future_costs[2];
            } 



        }
        
        else imperfect++;

        scanf("%d", &a[0]);
}

  
    printf("%d\n", perfect);
    printf("%d\n", marker[0]);
    printf("%d\n", marker[1]);
    printf("%d\n", marker[2]);
    printf("%d\n", marker[0]*100);
    printf("%d\n", marker[1]*300);
    printf("%d\n", marker[2]*700);
    printf("%d\n", marker[0]*100 + marker[1]*300 + marker[2]*700);
    printf("%d\n", imperfect);



}
