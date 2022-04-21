#include <stdio.h>
int main()
{
    char string[] = "my name is vansh karnwal .";
    int min, max;
    int l = sizeof(string)/sizeof(char);
    int temp;
    int freq[26];
    for(int i = 0; i < 26; i++) 
    {
        freq[i] = 0;
        for(int j = 0; j < l-1; j++) 
        {
            temp = (int)string[j];
            if(temp==(i+65)||temp==(i+97))  {
                freq[i]++;
            }
        }
    }
    min = max = freq[0];
    for(int i = 0; i < 26; i++) 
    {
        if(freq[i]>0)
        {
            if(min > freq[i]) 
            {
                min = freq[i];
            }
            if(max < freq[i]) 
            {
                max = freq[i];
            }
        }
    }
    printf("\nMinimum occuring frequency: %d\n Characters: ", min);
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]==min)
        {
            printf("%c, ", i+65);
        }
    }
    printf("\nMaximum occuring frequency: %d\n Characters: ", max);
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]==max)
        {
            printf("%c, ", i+65);
        }
    }
    return 0;
}