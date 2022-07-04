#include<stdio.h>

int str_length(char[]);
int str_compare(char[],char[]);
int str_concat(char[],char[]);

int main
{
    char str[50];
    char str1[50],str2[50];
    char str_des[100],str_src[50];

    int length,compare_res;

    printf("Enter thr string\n");
    scanf("%s",str);

    length=str_length(str);
    printf("The string %s is %d\n",str,length);

    printf("The two strings to compare\n");
    scanf("%d%d",str1,str2);

    compare_res=str_compare(str1,str2);

    if(compare_res<0)
    {
        printf("String \"%s\"is less than \"%s\"\n",str1,str2);
    }
    else if(compare_res==0)
    {
        printf("String \"%s\"is same as \"%s\"\n",str1,str2);
    }
    else
    {
        printf("String \"%s\"is greater than\"%s\"\n",str1,str2);
    }

    printf("Enter the two strings to compare\n");
    scanf("%s%s",str_des,str_src);

    str_concat(str_des,str_src);
    printf("The string after concatenation\"%s\"\n",str_des);

    return 1;







}


