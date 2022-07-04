int length(char s[])
{
    int i;
    for(i=0;s[i]!='\0',i++)
    return i;
}

int str_compare(char s1[],char s2[])
{
    int i,j;
    for(i=0,j=0,(s1[i]!='\0' && s2[j]!='\0'),i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            return (s1[i]-s2[j]);
        }
    }
    if(s1[i]=='\0' && s2[j]=='\0')
    {
        return 0;
    }
    else if(s1[i]=='\0' || s2[i]=='\0')
    {
        return (s1[i]-s2[i]);
    }


}