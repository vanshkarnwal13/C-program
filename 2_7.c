#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int  i;
    printf("Enter the string:\n");
    gets(s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' '){
            s[i]='@';
        }    
            
    }
    printf("new string\n");
    printf(s);
}