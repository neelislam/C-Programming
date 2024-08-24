#include<stdio.h>
#include<string.h>
int main()
{
    char name[50],reverse[50];
    printf("Enter your name :");
    gets(name);
    //strupr(name);
    //printf("%s",name);
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A'&&name[i]<='Z')
        {
            name[i]=name[i]+32;
        }
    }
    int flag=0;
    int i=0;
    int j=0;
    int len =0;
    while (name[i]!='\0')
    {
        len++;
        i++;
    }
    for(int i=len-1;i>=0;i--)
    {
        reverse[j]=name[i];
        j++;
    }
    reverse[j]='\0';
    printf("%s",reverse);
    for(int i=0;i<len;i++)
    {
        if(name[i]!=reverse[i])
        {
            flag=1;
            break;
        }
    }
    if(flag!=0)
    {
        printf("The string is not palindrome\n");
    }
    else
    {
        printf("The string is palindrome\n");
    }
    return 0;
}