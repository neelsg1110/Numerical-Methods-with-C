#include<stdio.h>
#include<math.h>

#define f(x) ((x*x*x)-(9*x)+1)

float a,b,c,h;

void main(void)
{
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    if(f(a)*f(b)>0)
        return;
    else
    {
        do
        {
            c=a-((f(a)*(b-a))/(f(b)-f(a)));
            if(f(c)>0)
                a=c;
            else
                b=c;
            h=a-((f(a)*(b-a))/(f(b)-f(a)));
            printf("%f\n",h);
        }
        while (fabs(h-c)>0.0001);
        printf("%f\n",h);      
    }
}