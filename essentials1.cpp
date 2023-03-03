#include <stdio.h>

int main(){
	
	//variables 
	//RAM (many cellule with 8bits ): size memory
	//char , int , long, float, double
	//work with variables ( declaration & intialization)
	char c='c';
	int i=2;
	float f=2.2;
	//io:input/output
	printf("\nc=%c\ni=%d\nf=%f",c,i,f);
	printf("\n Enter the value of c : ");
	scanf("%c",&c);
	printf("\n Enter the value of i : ");
	scanf("%d",&i);
	printf("\n Enter the value of f : ");
	scanf("%f",&f);
	printf("\nc=%c\ni=%d\nf=%f",c,i,f);

	//how to provide choices ( if/else, switch)
	
	return 0;
}