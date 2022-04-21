#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0,countt=0, i;
    printf("Enter the string:\n");
    gets(s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
        if(s[i] == '.')
            countt++;    
    }
    printf("length  of the string is: %d\n",i);
    printf("Number of words in given string are: %d\n", count + 1);
    printf("number of sentences are: %d\n",countt);
}