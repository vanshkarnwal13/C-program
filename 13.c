#include <stdio.h>
#include <math.h>
int main()
{
int n, num = 0;
printf( "Enter 3-digit number to print in words: \n");
scanf("%d", &num);
int i=2;
while(num != 0)
{

        
    switch(num / (int)(pow(10,i)))
    {
        case 0:
        printf("Zero ");
        break;
        case 1:
        printf("One ");
        break;
        case 2:
        printf("Two ");
        break;
        case 3:
        printf("Three ");
        break;
        case 4:
        printf("Four ");
        break;
        case 5:
        printf("Five ");
        break;
        case 6:
        printf("Six ");
        break;
        case 7:
        printf("Seven ");
        break;
        case 8:
        printf("Eight ");
        break;
        case 9:
        printf("Nine ");
        break;
    }
    num=num%(int)(pow(10,i));
    i=i-1;
    
}
return 0;
}