//Calculating simple interest
/*
Author:Diana
Date:25/09/2024
CT101/23407/24
*/
#include<stdio.h>
int main(){
    float principle,rate,time,simpleinterest;
    
    printf("Enter principle:");
    scanf("%f",&principle);

    printf("Enter rate per annum:");
    scanf("%f",&rate);
    
    printf("Enter time per year:");
    scanf("%f",&time);
    
    printf("The simpleinterest is");
    simpleinterest=(principle*rate*time)/100;
    printf("%.2f",simpleinterest);


return 0;
}

	














