#include<stdio.h>
#include<string.h>
void main()
{
    char str[40];
    int i,j,l;
    printf("enter string");
    gets(str);
    l=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
        {
            for(j=i;j<l;j++)
        {
            str[j]=str[j+1];
        }
        }
    }
    puts(str);
}
