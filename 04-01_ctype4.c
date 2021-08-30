#include <stdio.h>
#include <ctype.h>

int main()
{
	int acter;

	do
	{
		acter = getchar();
		if(isalpha(acter))
			putchar(acter);
		 	Printf('\n');
	}
	while( acter != '\n');

	return(0);
}

