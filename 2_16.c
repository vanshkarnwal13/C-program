#include<stdio.h>
int main()
{
    char ch[10];
    char s[100];
    char replace[100];
    int flag = 0;
    int pos = 0;
    printf("enter string: ");
    scanf(" %s",ch);
    printf("enter substring u want to replace: ");
    scanf(" %s",s);
    printf("enter new string: ");
    scanf(" %s",replace);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i]==s[0])
        {
            flag = 1;
            pos = i;
        }
        if(flag = 1)
        {
            for (int j = i+1; ch[j]!='\0' && flag==1; j++)
            {
                if(!(ch[j]==s[j-i]))
                {
                    flag = 0;
                }
            }
            if(flag == 1)
            {
                break;
            }
            
        }
    }
    if(flag==1)
    {
        for (int i = 0; replace[i]!='\0'; i++)
        {
            ch[pos+i] = replace[i];
        }
        
    }
    printf("\nModified string is: %s", ch);
    return 0;
}