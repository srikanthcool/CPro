#include<stdio.h>
#include<string.h>

int main()
{
    char one[50],two[60],buffer[120];
    scanf("%s",one);
    scanf("%s",two);

    //fgets(one,50,stdin);
    //fgets(two,60,stdin);
    

	strcpy(buffer,one);
	strcat(buffer,two);
	puts(buffer);

    return(0);
}
