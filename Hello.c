#include<stdio.h>
#include<stdlib.h>

#define SIZE 64

int main()
{
   char *name;

   name=malloc(sizeof(char)*SIZE);
    if( name == NULL)
        {
            puts("Unable to allocate memory");
            return(1);
        }

   printf("please enter name");
   fgets(name,SIZE,stdin);
   printf("Hello %s",name);

    return(0);
}