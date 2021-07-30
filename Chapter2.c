#include<stdio.h> //for standard IO functions
#include<math.h> // For mAtch functions

int main()
{
    float a,b;
    printf("enter values for a and b: \t");
    scanf("%f%f",&a,&b);
    printf("input value a = %f and b=%f \n",a,b);
    printf("a+b=:  %f \n",a+b);
    printf("a-b=:  %f \n",a-b);
    printf("a*b=:  %f \n",a*b);
    printf("a/b=:  %f \n",a/b);
    printf("A exponent b:  %f \n",pow(a,b));
    printf("Square root of a and b:  %f  %f\n",sqrt(a),sqrt(b));
    return(0);
}