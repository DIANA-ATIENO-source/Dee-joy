//program to calculate compound interest
/*
Author:Diana
Date:25/09/2024
CT101/G/23407/24
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
    
    printf("The compound interest is:");
    amt=p*pow(1+r/100,t);
    ci=amt-p;
    
    printf("%.2f,");






return 0;
}
	










