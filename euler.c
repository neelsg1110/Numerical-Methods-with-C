#include<stdio.h>

#define f(x) (x+y)

void main(void)
{
    float x0,y0,xn,h,yn,slope;
    int n;
    printf("Enter the values of x0,y0,xn\n");
    scanf("%f,%f,%f",&x0,&y0,&xn);
    printf("Enter the no. of steps\n");
    scanf("%d",&n);
    h=(xn-x0)/n;
    printf("x0\ty0\tslope\tyn\n");
    for(int i=0;i<n;i++)
    {
        slope=x0+y0;
        yn=y0+(h*slope);
        printf("%.4f\t%.4f\t%.4f\t%.4f\n",x0,y0,slope,yn);
        y0=yn;
        x0+=h;
    }
    printf("The value of y at x = %.4f\n",yn);
}