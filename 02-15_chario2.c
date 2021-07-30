#include <stdio.h>

int main()
{
	int a,b,c,d;

	printf("Type two letters: ");
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	printf("You typed '");
	putchar(a);
	printf("' and '");
	putchar(b);
	putchar(c);
	putchar(d);
	printf("'.\n");

	return(0);
}

