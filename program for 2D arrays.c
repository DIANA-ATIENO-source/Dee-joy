// C arrays - 2D arrays
#include<stdio.h>
int main(){
	int b,c;
	int marks[2][3]={{10,20,30},{40,50,60}};
	for(b=0;b<2;b++){
    for(c=0;c<3;c++){
		printf("marks[%d][%d]= %d\n",b,c,marks[b][c]);
	}
	}
	return 0;
	}
