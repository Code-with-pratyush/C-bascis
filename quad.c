#include<stdio.h>

#include<math.h>

int main()
{
    float a,b,c,r1,r2,desc,realpart,imgpart;

    printf("Enter the value of cofficents a,b,c\n");
    scanf("%f,%f,%f",&a,&b,&c);

    if(a==0)
    {
        printf("The given equation is not a quadratic equation\n");
        printf("The equation is linear euation\n");
        printf("Please! Try Again");

        return -1;
    }

    desc=(b*b)-(4.0*a*c);

    if(desc==0)
    {
        r1=r2=(-b)/(2.0*a);
        printf("The roots are r1=r2=%f\n",r1);
    }
    else if(desc>0)
    {
        r1=(-b+sqrt(desc))/2.0*a;
        r1=(-b-sqrt(desc))/2.0*a;
        printf("The roots are r1=%f and r2=%f\n",r1,r2);
    }
    else
    {
        realpart=(-b)/(2*a);
        imgpart=sqrt(-desc)/(2.0*a);
        printf("The roots are r1=%f+i%f\n",realpart,imgpart);
        printf("r2=%f-i%f",realpart,imgpart);
    }
    return 0;
}