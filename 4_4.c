#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    FILE *f1;
    char ch;
    int x = 0, y = 0;
    char temp[20];
    char word[20][100];
    int len[20];
    f1 = fopen("file1.txt", "r");
    do
    {
        ch = fgetc(f1);
        if (ch == EOF)
            break;
        else if (ch != ' ')
        {
            word[x][y] = ch;
            y++;
        }
        else
        {
            len[x] = y;
            x++;
            y = 0;
        }
    } while (1);
    len[x] = y;
    for (int i = 0; i <= x; i++)
    {
        word[i][len[i]] = '\0';
    }
    for (int i = 0; i <= x; i++)
        for (int j = i + 1; j <= x; j++)
        {
            if (strcmp(word[i], word[j]) > 0)
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    FILE *f2;
    f2 = fopen("file2.txt", "w");
    for (int i = 0; i <= x; i++)
        fprintf(f2, "%s ", word[i]);
    fclose(f2);
    f2 = fopen("file2.txt", "r");
    int length[20];
    x = 0, y = 0;
    do
    {
        ch = fgetc(f2);
        if (ch == EOF)
            break;
        if (ch != ' ')
        {
            word[x][y] = ch;
            y++;
        }
        else
        {
            length[x] = y;
            x++;
            y = 0;
        }
    } while (1);
    length[x] = y;
    for (int i = 0; i <= x; i++)
    {
        word[i][length[i]] = '\0';
    }
    int count[x];
    for (int i = 0; i < x; i++)
        count[i] = 1;
    for (int i = 0; i < x - 1; i++)
        for (int j = i + 1; j < x; j++)
        {
            if (count[j] != -1 && count[i] != -1)
            {
                if (strcmp(word[i], word[j]) == 0)
                {
                    count[i]++;
                    count[j] = -1;
                }
                else
                    break;
            }
        }
    for (int i = 0; i < x; i++)
    {
        if (count[i] != -1)
        {
            printf("%s : %d\n", word[i], count[i]);
        }
    }
    return 0;
}
