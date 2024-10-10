//program for while loop

/*
Author:Diana
DATE:8/10/2024
*/
#include <stdio.h>
int main()
{
	int i,sum=0,input,square;
	
	
	
	printf("Enter Start:",i);
	scanf("%d",&i);
	
	printf("Enter limit:",input);
	scanf("%d",&input);
	
	while (i<=input){
		
		printf("%d\n",i);
		sum=sum + i;
		i++;
		
		}
	printf("Sum is:%d",sum);



	return 0;
}