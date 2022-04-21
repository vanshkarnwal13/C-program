#include<stdio.h>
int main()
{
    int age[100],count=0;
    printf("enter the age of people:");
    for(int i=0;i<100;i++)
    {
        printf("%d\n",i);
        age[i]=i;

    }
    for(int i=0;i<100;i++)
    {
        if(age[i]>=50 && age[i]<=60)
        {
            count++;
        }
        else
        continue;
    }
    printf("\nnumber of persons in the age group 50 to 60 are %d ",count);

}    