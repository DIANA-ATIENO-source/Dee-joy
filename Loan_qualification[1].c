//program to implement whether a client qualifies for a loan
/*
Authot:Diana
Date:28/09/2024
CT101/G/23407/24
*/
#include<stdio.h>
int main(){
	int age,annualincome;
	
	printf("Enter age:");
	scanf("%d",&age);
	
	printf("Enter annualincome:");
    scanf("%d",& annualincome);
    
    if (age>=21 &&
    annualincome>=21000){
    printf("Congratulations you qualify for a loan");}

   else{"Unfortunately,we are unable to offer you a loan at at this time";}
   




return 0;
}














 









