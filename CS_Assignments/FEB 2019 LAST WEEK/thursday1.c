#include<stdio.h>
void main()
{
        int n,i;
        scanf("%d", &n);
	int q=2*n-1;
        
 
        
        for(i=n; i>=2; i--,q--)
 {
		
	    int u=q;

            for(int j=2*(i-1); j>=1 ; j--)
            {
                printf("\t");
            }  
	    
            
            int p=n;
	    
	    
            
            for(int k=1; k<=n-i+1; k++)
            {
	            
                    printf("%d\t\t",p*u);
                    p--; u--;
            }
		

            printf("\n");
}

                   
            
            
        for(int c=n; c>=1; c--)  printf("%d\t\t", c*c)    ; 
	printf("\n"); 


         int s=n-1;
         
        for( i=2; i<=n; i++,s--)
        {
		
	    int u=s;

            for(int j=1; j<=2*(i-1) ; j++)
            {
                printf("\t");
            }  
	    
            
            int p=n;
	    
	    
            
            for(int k=n-i+1; k>=1; k--)
            {
	            
                    printf("%d\t\t",p*u);
                    p--; u--;
            }
		

            printf("\n");

           }        
                 


         

}
//created by Suraj Choubey | All Copyrights Reserved 2020
