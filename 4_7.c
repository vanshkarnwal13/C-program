#include <stdio.h>
#include <string.h>
int main()
{
    char ch, s[1000];
    int i = 0;
    FILE *f1, *f2;
    f1 = fopen("file7a.txt", "r");
    f2 = fopen("file7b.txt", "w");
    while ((ch = fgetc(f1)) != EOF)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
        {
            s[i] = '\0';
            strrev(s);
            i = 0;
            fputs(s, f2);
            fputc(ch, f2);
        }
        else
        {
            s[i] = ch;
            i++;
        }
    }
    printf("\nFile copied successfully");
    fclose(f1);
    fclose(f2);
    return 0;
}