//program to calculate compound interest
/*
Author:Diana
Date:25/09/2024
REG NO:CT101/G/23407/24
*/
#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,ci,amt;
    printf("Enter principle:");
    scanf("%f",&p);
    
    printf("Enter rate per annum:");
    scanf("%f",&r);
    
    printf("Enter time per year:");
    scanf("%f",&t);
    
    amt=p*pow(1+r/100,t);
    ci=amt-p;
    printf("The compound interest is:%.2f\n",ci);
    printf("The amount is:%.2f",amt);
return 0;
}
	











