#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s1[] ="\"If you fail, never give up because FAIL means \"First Attempt in Learning.\"\"";
    char s2[] = "\"All of us do not have equal talent. But, all of us have an equal opportunity to develop our talents. \"";
    char s3[] = "\"Excellence is a continuous process & not an accident. \"";
    strcat(s1,s2);
    strcat(s1,s3);
    int count=0;
    for(int i = 0; i<strlen(s1); i++){
        if(isalnum(s1[i])){}
        else{
            count++;
        }
    }
    printf("all special char are: %d",count);

}