//program to declare and initialise structure statement

#include<stdio.h>
#include<string.h>

struct book{
	char title[20];
	char author[20];
	int publication_year;
	char ISBN[10];
	float price;
	
}
book1;
int main(){
	        //prompt the user to enter book title
	printf("enter the book title:");
	scanf("%s",&book1.title);
	
        	//prompt the user to enter booh author
	printf("enter the book author:");
	scanf("%s",&book1.author);
	
	        //prompt the user to enter book publication_year
	printf("enter book publication_year:");
	scanf("%d",&book1. publication_year);
	
	       //prompt the user to enter book ISBN
	printf("enter the book ISBN:");
	scanf("%s",&book1. ISBN);
  	      
			//prompt the user to enter book price
	printf("enter the book price:");
	scanf("%f",&book1. price);
	
    	//output
	printf("the book title is:%s\n",book1. title);
	printf("the book author is:%s\n",book1. author);
	printf("the book publication_year is:%d\n",book1. publication_year);
	printf("the book ISBN is:%s\n",book1. ISBN);
	printf("the book price is:%s\n",book1. price);
	
	return 0;
	}






















