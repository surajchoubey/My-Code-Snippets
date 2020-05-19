#include<stdio.h>
#include<string.h>
#define MAX 10

int main()
{
	char str1[MAX], str2[MAX];
	scanf("%s", str1);
	scanf("%s", str2);
	int n=strlen(str1);
	int m=strlen(str2);
	char STR1[MAX], STR2[MAX],RESULT[MAX];
	int k=0,i;

	for(i=MAX-1 ; i>=0 ; i--) 
	{
		if(i<=n-1){
			STR1[i]=str1[k++];
		}
		else STR1[i]='0';
	}

	k=0;

	for(i=MAX-1 ; i>=0 ; i--) 
	{
		if(i<=m-1){
			STR2[i]=str2[k++];
		}
		else STR2[i]='0';
	}



	int carry=0;

	for(i=0 ; i<MAX ; i++)
	{
		int sum1=(int)STR1[i] + (int)STR2[i]+carry;
		int sum2=sum1%10;
		RESULT[i]=(char)sum2;
		carry=(sum1-sum2)/10;
	}

	printf("%s", RESULT);

	return 0;
}