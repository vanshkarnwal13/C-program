#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char splitStrings[100][100];
    int i, j, cnt;
    printf("Enter a string: ");
    gets(str);
    j = 0;
    cnt = 0;
    for (i = 0; i <= (strlen(str)); i++) {
       
        if (str[i] == ' ' || str[i] == ',' || str[i] == '\0') {
            splitStrings[cnt][j] = '\0';
            cnt++; 
            j = 0; 
        }
        else {
            splitStrings[cnt][j] = str[i];
            j++;
        }
    }
    printf("\nStrings (words) after split by space:\n");
    for (i = 0; i < cnt; i++)
        printf("%s\n", splitStrings[i]);  
    return 0;
}