//calculation of electricity bill
/*
Date:8/10/2024
*/
#include<stdio.h>
int main()
{
	int Customer_ID;
	char Customer_Name[100];
	float Units_consumed,Surcharge,Charge_Per_Unit,Total_Bill,Total_Amount;
	
	 printf("Enter Customer Name:",Customer_Name);    
    scanf("%s",&Customer_Name);
    
    printf("Enter Customer Id:",Customer_ID);
    scanf("%d",&Customer_ID);
      
    printf("Enter units consumed:",Units_consumed);
    scanf("%f",&Units_consumed);
 
     
       
if (Units_consumed==0){Charge_Per_Unit =0;}      
       
 if (Units_consumed>=1 && Units_consumed<=199){Charge_Per_Unit =1.20 ;}
 
 else if(Units_consumed>=200 && Units_consumed<400){Charge_Per_Unit =1.50 ;}
 
 else if (Units_consumed>=400 && Units_consumed<600){Charge_Per_Unit=1.80 ;}

else {Charge_Per_Unit =2.00 ;}

Total_Bill=(Charge_Per_Unit*Units_consumed);


if (Total_Bill>400){Surcharge=Total_Bill*0.15;}
if(Total_Bill<100){Total_Bill=100;}

Total_Amount=Total_Bill+Surcharge;
  
        
printf("\n\nTotal bill is %.2f\n",Total_Bill);
printf("Customer Name: %s\n",Customer_Name);
printf("Customer Id :%d\n",Customer_ID);
printf("Units Consumed:%.2f\n",Units_consumed);
printf("Charges Per Unit:%.2f\n",Charge_Per_Unit);
printf("Total Amount:%.2f\n",Total_Amount);
   
	
 return 0;
}









































