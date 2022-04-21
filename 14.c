#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len, vowel, consonant;
    printf("Enter any string: ");
    gets(str);
    vowel = 0;
    consonant = 0;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            switch(str[i])
            {
                case 'a':
                vowel++;
                break;
                case 'e':
                vowel++;
                break;
                case 'i':
                vowel++;
                break;
                case 'o':
                vowel++;
                break;
                case 'u':
                vowel++;
                break;
                case 'A':
                vowel++;
                break;
                case 'E':
                vowel++;
                break;
                case 'I':
                vowel++;
                break;
                case 'O':
                vowel++;
                break;
                case 'U':
                vowel++;
                break;
                default:
                consonant++;


            }
            
        }
    }

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);

    return 0;
}