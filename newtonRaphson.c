#include<stdio.h>
#include<math.h>

#define f(x) ((x*x*x*x)-x-10)
#define df(x) ((4*x*x*x)-1)

float a,b,c,x;

void main(void)
{
    printf("Enter the initial value of x\n");
    scanf("%f",&a);
    printf("Enter the desired accuracy\n");
    scanf("%f",&c);
    do
    {
        b=a;
        x=a-f(a)/df(a);
        printf("%f\n",x);
        a=x;
    } while(fabs(b-a)>c);
    printf("The root is : %f\n",x);
}