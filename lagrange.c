#include<stdio.h>

int n;
float p,a,sum=0.0,x[100],y[100];

void main(void)
{
    printf("Enter the no. of arguments:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("x[%d]: ",i);
        scanf("%f",&x[i]);
        printf("y[%d]: ",i);
        scanf("%f",&y[i]);
    }
    printf("Enter the interpolating point:\n");
    scanf("%f",&a);
    for(int i=0;i<n;i++)
    {
        p=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                p*=((a-x[j])/(x[i]-x[j]));
            }
        }
        sum+=p*y[i];
    }
    printf("y= %.4f\n",sum);
}