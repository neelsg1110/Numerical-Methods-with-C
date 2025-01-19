#include<stdio.h>

int n,i,j;
float a,u,h,p,q,sum,y[100][100],x[100];

void main(void)
{
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter the values of x\n");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    printf("Enter the no. of entities\n");
    for(i=0;i<n;i++)
        scanf("%f",&y[i]);
    for(j=1;j<n;j++)
    {
        for(i=0;i<n;i++)
            y[i][j]=y[i+1][j-1]-y[i][j-1];
    }
    printf("The forward table is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
            printf("%f\t",y[i][j]);
        printf("\n");
    }
    printf("Enter the value of interpolating point\n");
    scanf("%f",&a);
    h=x[2]-x[1];
    u=((a-x[0]/h));
    sum=y[0][0];
    p=1,q=1;
    for(j=1;j<n;j++)
    {
        p*=j;
        q*=(u+1-j);
        sum+=(q*y[0][j]/p);
    }
    printf("Sum = %.4f\n",sum);
}