#include<stdio.h>
#include<ctype.h>
void main()
{
	int matchsticks;
	int n=1, minus,flag=0,flag2=0;;
	char checker='Y';

do{

	printf("==============================================================================\n");
	printf("Enter number of matchsticks to begin the game(>10):\n");
	printf("==============================================================================\n");
	scanf("%d", &matchsticks);





//**********************************************GAME-STARTS-IF-MATCHSTICKS-GREATER-THAN-10********************************************
		
			if(matchsticks>10)
			{			// PLAYER CHOOSES FIRST
						if((matchsticks-1)%5==0)

						 {		printf("==============================================================================\n");
    							printf("Player wins the toss and plays first\n");
    							printf("==============================================================================\n");
							do
							{						flag=0;		

													do
													{													
													
														printf("Choose number of matchsticks(1<=n<=4) : \n");
														scanf( "%d", &n);

														switch(n)
														{
															case 1: n=1; flag=1; break;
															case 2: n=2; flag=1; break;
															case 3: n=3; flag=1; break;
															case 4: n=4; flag=1; break;
															default: printf("Invalid Input\n"); flag=0; break;
														}


				    								}while(flag==0);

											
											matchsticks=matchsticks-n;
											printf("Remaining: %d\n\n", matchsticks );
										
									
											if(matchsticks%5==0) minus=4;
											else if(matchsticks%5==2) minus=1;
											else if(matchsticks%5==3) minus=2;
											else if(matchsticks%5==4) minus=3;
											else printf("Error pls redo code\n");
									
										matchsticks=matchsticks-minus;
										printf("Computer picked %d matchsticks​ \n", minus);
										printf("Remaining: %d\n\n", matchsticks );

										if(matchsticks==1) break;

  							}while(matchsticks>1);

  							if(matchsticks==1) 
  								{
  									printf("==============================================================================\n");
  									printf("Computer wins the game like always\n");
  									printf("==============================================================================\n");
  								}

						}
						// COMPUTER PLAYS FIRST

						else
						{   
									printf("==============================================================================\n");
						            printf("Computer wins the toss and plays first\n");
						            printf("==============================================================================\n");
   
									do
									{	
											if(matchsticks%5==0) minus=4;
											else if(matchsticks%5==2) minus=1;
											else if(matchsticks%5==3) minus=2;
											else if(matchsticks%5==4) minus=3;
											else printf("Error pls redo code\n");
									

										matchsticks=matchsticks-minus;
										printf("Computer picked %d matchsticks​ \n", minus);
										printf("Remaining: %d\n\n", matchsticks );


										if(matchsticks==1) break;
									
										flag=0;		

													do
													{													
													
														printf("Choose number of matchsticks(1<=n<=4) : \n");
														scanf( "%d", &n);

														switch(n)
														{
															case 1: n=1; flag=1; break;
															case 2: n=2; flag=1; break;
															case 3: n=3; flag=1; break;
															case 4: n=4; flag=1; break;
															default: printf("Invalid Input\n"); flag=0; break;
														}


				    								}while(flag==0);

				    							

										matchsticks=matchsticks-n;
										printf("Remaining: %d\n\n", matchsticks );
										

								    }while(matchsticks>1);

								    if(matchsticks==1) 
								    	{
								    	    printf("==============================================================================\n");
								    		printf("Computer wins the game like always\n");
								    		printf("==============================================================================\n");
								    	}

						}

			}
//****************************************************GAME-ENDS**********************************************************************
			
//===========================================CONDITION FOR N LESS THAN OR EQUAL TO TEN===============================================
			else if(matchsticks<=10)
			{
				printf("Invalid Input. Number of matchsticks must be greater than 10 \n");
			}
//===========================================LESS THAN OR EQUAL TO TEN CONDITION ENDS================================================


//------------------------------------------------PLAY AGAIN PROMPT------------------------------------------------------------------
			
			printf("Do you wish to play again(Y/N)? \n");
			
			scanf(" %c", &checker);
			
		

}while(checker=='y'|| checker=='Y');
	

}

