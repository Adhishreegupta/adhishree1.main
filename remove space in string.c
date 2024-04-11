#include<stdio.h>
#include<string.h>
void main()
{
    char str[40];
    int i,j,l,c=0;
    printf("enter string");
    gets(str);
    l=strlen(str);
    j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    puts(str);
}
