#include <stdio.h>
int no_of_vowels() 
{  
    FILE* fp;
    char c;
    int count = 0;
    fp = fopen("file6.txt", "r");
    if (fp == NULL) 
    {
        printf("UNABLE TO OPEN THE FILE");
        return -1;
    }
    
    while ((c = fgetc(fp)) != EOF) 
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ++count;        
        }
    }
    
    return count;
    
}
void print_file() 
{   
    FILE* fp;
    char c;
    fp = fopen("file6.txt", "r");
    
    if (fp == NULL) {
        printf("UNABLE TO OPEN THE FILE");
        return;
    }
    
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    
}
int main()
{
    printf("\n***CONTENT OF THE INPUT FILE***\n");
    print_file();
    printf("\n");
    printf("\n");
    printf("Number of Vowels = %d", no_of_vowels());
}