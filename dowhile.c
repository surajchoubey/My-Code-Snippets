#include<stdio.h>
int main()
{
	char y;
	do
{

	printf("%c", (char)48 );
	printf("(y/n)?");
	scanf(" %c", &y);
}while(y=='Y' || y=='y');

return 0;

}
