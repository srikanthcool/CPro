#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int *aptr;

	aptr = array;	
	aptr = aptr+1;	/* no & needed for an array */

	printf("The element is %d\n",*(aptr+1));

	return(0);
}

