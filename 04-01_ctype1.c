#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch = 'A';

	printf("Original %c\n",ch);
	printf("Lowercase %c\n",tolower(ch));
	printf("Uppercase %c\n",toupper(ch));
	printf("Original %c\n",ch);

	return(0);
}

