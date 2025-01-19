#include<stdio.h>
#include<math.h>

#define f(x) ((x*x*x)-x-4)

float a,b,c,h;

void main(void)
{
    printf("Enter the range of a and b\n");
    scanf("%f,%f",&a,&b);
    if(f(a)*f(b)>0.0)
        return;
    else
    {
        do
        {
            c=(a+b)/2;
            if(f(c)<0)
                a=c;
            else
            {
                b=c;
                h=(a+b)/2;
                printf("%.4f\n",h);
            }
        } while (fabs(h-c)>0.0001);        
    }
    printf("%.4f\n",h);
}