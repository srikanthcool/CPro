#include <stdio.h>


int evaluate(int x)
{
	if(x<10)
		printf("The values passed %d is less than 10",x);
	else if (x==10)
		printf("The values passed %d is equal to 10",x);
	else
		printf("The values passed %d is greater than 10",x);
	return x;
}

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	puts("\n");
	printf("Function value %d",evaluate(i));
	puts("\n");

	return(0);
}


 
	
		

