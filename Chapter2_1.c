#include<stdio.h>

int main()
{
    int x;
    for(x=0;x<20;x++)
        printf("for loop values: %d \n",x+1);
    x=-10;
    while(x<=10)
    {
        //if(x%2==0)
            printf("Even value between -10 and 10 %d \n",x);
        x=x+2;

    }
    return (0);
}