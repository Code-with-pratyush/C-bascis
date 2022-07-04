#include<stdio.h>

int main()
{
    int num1,num2;
    float result;
    char op;

    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);


    printf("+ for addition \n");
    printf("- for substraction \n");
    printf("* for multipiclation\n");
    printf("/ for division\n");
    printf("%% for modolus\n");

    printf("Enter an charecter choice: \n");

    scanf(" %c",&op);

    if(op=='+')
    {
        result=num1+num2;

    }
    else if(op=='-')
    {
        result=num1-num2;
    }
    else if(op=='*')
    {
        result=num1*num2;
    }
    else if(op=='/')
    {
        if(op=='0')
        {
            printf("The division not possible");
            return -1;
        }
        else
        {
            result=num1/num2;
        }
    }
    else if(op=='%')
    {
        if(num2=='0')
        {
            printf("The division not possible");
            return -1;
        }
        else
        {
            result=num1%num2;
        }
    }
    else
    {
        printf("INvalid charecter");
        return -1;

    }
    printf("Result=%f\n",result);
    return 0;
}