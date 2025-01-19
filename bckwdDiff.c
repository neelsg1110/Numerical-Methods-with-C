#include<stdio.h>

int n,i,j;
float a,u,h,p,q,sum,y[100][100],x[100];

void main(void)
{
    printf("Enter the no. of argumets\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    printf("Enter the arguments\n");
    for(i=0;i<n;i++)
        scanf("%f",&y[i][0]);
    for(j=1;j<n;j++)
    {
        for(i=0;i<n;i++)
            y[i][j]=y[i][j-1]-y[i-1][j-1];
    }
    printf("The backward table is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf("%f\t",y[i][j]);
        printf("\n");
    }
    printf("Enter the value of interpolating point\n");
    scanf("%f",&a);
    h=x[2]-x[1];
    u=((a-x[n-1])/h);
    sum=y[n-1][0];
    p=1,q=1;
    for(j=1;j<n;j++)
    {
        p*=j;
        q*=(u+j-1);
        sum+=(q*y[n-1][j]/p);
    }
    printf("Sum = %.4f\n",sum);
}