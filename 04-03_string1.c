#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Just how long am I?";
	int len;

	len = strlen(string);
	printf("The following string:\n");
	puts(string);
	printf(" '%s' is %d characters long.\n",string,len);

	return(0);
}

 