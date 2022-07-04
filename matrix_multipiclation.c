#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q;

    printf("The order of matrix A:");
    scanf("%d%d",&m,&n);

    printf("The order of matrix B:");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("The matrix multipiclation is not possible\n");
        printf("Please enter the the correct order");
        return -1;
    }

    printf("\n Enter %d the elements matrix A: ",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix a is :");
    for(int i=0; i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter %d the elements matrix B: ",p*q);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[p][q]);
        }
    }
    printf("The matrix a is :");
    for(int i=0; i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",b[p][q]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    { 
        for(int j=0;j<q;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<n;k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    printf("\n The product matrix --\n\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;



}