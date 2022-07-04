#include<math.h>
#include<stdio.h>

#define PI 3.142876

int main()
{
    float degree,nume,deno,x,term;


    printf("Enter the degrees: ");
    scanf("%d",&degree);

    //convert dergree into radians
    x=degree*(PI/180);

    nume=x;
    int sum=0;
    int i=1;
    deno=1.0;

    do
    {
        term=nume/deno;
        sum=sum+term;

        nume=-nume*

    }





}