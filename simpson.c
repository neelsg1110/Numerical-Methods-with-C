#include<stdio.h>

#define f(x) (1/(1+x*x))

int n;
float a,b,h=0.0,sum=0.0,sum_o=0.0,sum_e=0.0,x[100],y[100];
void main(void)
{
    printf("Enter lower limit\n");
    scanf("%f",&a);
    printf("Enter upper limit\n");
    scanf("%f",&b);
    printf("Enter interval\n");
    scanf("%d",&n);
    h=(b-a)/n;
    if(n%2!=0)
        return;
    else
    {
        for(int i=0;i<=n;i++)
        {
            x[i]=a+(i*h);
            y[i]=f(x[i]);
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
                sum_e=sum_e+y[i];
            else
                sum_o=sum_o+y[i];
        }
        sum=(h/3)*(y[0]+y[n]+4*sum_o+2*sum_e);
    }
    printf("Solution : %.4f\n",sum);
}