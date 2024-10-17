// program for electricity function
Author:Diana Atieno
#include <stdio.h>
		//input function declaration
void  input(char *customer-name,int *customer_id,float *units-consumed);

void output(char *customer_name,int customer_id,float units_consumed,float charge,
float total_bill,float total_amount);

int calculation(float units_consumed,float *charge,float *total_bill,float*total_amount,float *surcharge);
  
int main() {
    int customer_id;
    char customer-name[20];
    float units_consumed,charge,total_bill,surcharge=0.0,total_amount;
         //user input:functioncalling
    input(customer_name, &customerId,&units_consumed);
 
       //if else statement declaration
     calculation( units_consumed,  &charge, &total_bill, &total_amount, &surcharge) ;


        //program output
 output(customer_name, customer_id ,units_consumed, charge,total_bill,total_amount);
     

    return 0;
}
				//input function
void  input(char *customer-name,int *customer_id,float *units_consumed){
	printf("Enter customer_name:");    
    scanf("%s",customer_name);
    
    printf("Enter customer_id:");
    scanf("%d", customer_id);
      
    printf("Enter units_consumed:");                   
	 scanf("%f",units_consumed);
    }
    		//output function
    	void output(char *customer_name,int customer-id,float units_consumed,float charge,float Total_Bill,float TotalAmount){	 
    	
    	            
printf("\n\t....customer_details.....");
printf("\ncustomer_name: %s",customer_name);
printf("\ncustomer_id :%d",customer_id);
printf("\nunits_consumed:%.2f",units_consumed);
printf("\ncharges_per-unit:%.2f",charge);
printf("\ntotal_bill is %.2f",total_bill);
printf("\ntotal-amount payable:%.2f",total_amount);
    			}
    			//calculation function 
    int calculation(float units-consumed,float *charge,float *total_bill,float*total_amount,float *surcharge){
    if (units_consumed==0){*charge =0;}      
       
 if (units_consumed>=1 && units_consumed<=199){*charge =1.20 ;}
 
 else if(units_consumed>=200 && units_consumed<400){*charge =1.50 ;}
 
 else if (units_consumed>=400 && units_consumed<600){*charge =1.80 ;}

else {*charge =2.00 ;}

*total_bill=(*charge*units_consumed);


if (*total_bill>400){*surcharge=*total_bill*0.15;}else {*surcharge=0;}
if(*total_bill<100){*total_bill=100;}

*total-amount=*total_bill + *surcharge;

return 0;
}
 
 
	