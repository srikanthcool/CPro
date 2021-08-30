#include <stdio.h>

void blorf(void)
{
	puts("The blorf() function runs when it's called");
}


int main()
{
	puts("The main() function always runs first");
	blorf();
	puts("Thanks, blorf()");

	return(0);
}


