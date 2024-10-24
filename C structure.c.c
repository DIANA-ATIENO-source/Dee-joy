//Program for C structure
/*
#include <stdio.h>
#include <string.h>
*/
struct book{
	char title[20];
	char author[20];
	int publication_year;
	char ISBN[10];
	float price;
	
	
}
book1;
int main (){
	
	//struct initialization
	
	strcpy(book1. title,"introduction to C programmimg");
	strcpy(book1. author,"John Smith");
	book1. publication_year=2022;
	strcpy(book1. ISBN,"9780131103627");
	book1. price=49.99;
	
	     //output results 
	printf("the title is:%s\n",book1.title);
	printf("the author is:%s\n",book1. author);
	printf("the publication_year is:%d\n",book1. publication_year);
	printf("the ISBN is:%s\n",book1. ISBN);
	printf("the price is:%.2f\n",book1. price);
	
	
return 0;	
}
