//program to calculate fine for overdue books
/*
Author:Diana
Date:29/09/2024
CT101/G/23407/24
*/
#include<stdio.h>
int main(){
    int Book_ID,Due_Date,Return_Date,Days_Overdue,Fine_Rate,Fine_Amount;
   
   printf("Enter Book_ID:");
   scanf("%d",&Book_ID);

   printf("Enter Due_Date:");
   scanf("%d",&Due_Date);

  printf("Enter Return_Date:");
  scanf("%d",&Return_Date);
  
Days_Overdue=Return_Date-Due_Date;

if (Days_Overdue<=7){Fine_Rate=20;}

if (Days_Overdue>=8 && Days_Overdue<=14){Fine_Rate=50;}

if (Days_Overdue>=15){Fine_Rate=100;}

 Fine_Amount =Fine_Rate *Days_Overdue;
printf("\tBOOK DETAILS\n");
   printf("Book Id:%d\n",Book_ID);
   
   printf("Duedate:%d\n",Due_Date);
   
   printf("Returndate:%d\n",Return_Date);
   
   printf("Daysoverdue:%d\n",Days_Overdue);
   
   printf("Finerate:%d\n",Fine_Rate);
   
   printf("Fineamount:%d\n",Fine_Amount);

  


return 0;
}








