#include<stdio.h>

#define f(x) (1/(1+x*x))

double a=0.0,b=0.0,h=0.0,temp=0.0,x[100],y[100],sum=0.0;
int n=0;

void main(void)
{
    printf("Enter the lower limit\n");
    scanf("%lf",&a);
    printf("Enter the upper limit\n");
    scanf("%lf",&b);
    printf("Enter the no. of intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    for(int i=0;i<=n;i++)
    {
        x[i]=a+(i*h);
        y[i]=f(x[i]);
    }
    for(int i=1;i<n;i++)
        temp=y[i]+temp;
    sum=(h/2)*(y[0]+y[n]+2*temp);
    printf("Solution : %.4f\n",sum);
}