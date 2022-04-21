#include <stdio.h>
#include <time.h>
int isLeapYear(int year, int month) 
{
    int flag = 0;
    if (year % 100 == 0) 
    {
            if (year % 400 == 0) 
            {
                    if (month == 2) 
                    {
                            flag = 1;
                    }
            }
    } 
    else if (year % 4 == 0) 
    {
            if (month == 2) 
            {
                    flag = 1;
            }
    }
    return (flag);
}
int main()
{
    int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days, month, year;
    char dob[100];
    time_t t;
    struct tm *tt;
    printf("Enter your date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&days,&month, &year);
    t = time(NULL);
    tt = localtime(&t);
    printf("Current Date: %d/%d/%d\n",tt->tm_mday, tt->tm_mon + 1, tt->tm_year + 1900);
    days = a[month - 1] - days ;
    if (isLeapYear(year, month)) 
    {
            days = days + 1;
    }
    days = days + tt->tm_mday;
    month = (12 - month) + (tt->tm_mon);
    year = (tt->tm_year + 1900) - year - 1;
    if (isLeapYear((tt->tm_year + 1900), (tt->tm_mon + 1))) 
    {
            if (days >= (a[tt->tm_mon] + 1)) 
            {
                    days = days - (a[tt->tm_mon] + 1);
                    month = month + 1;
            }
    } 
    else if (days >= a[tt->tm_mon]) 
    {
            days = days - (a[tt->tm_mon]);
            month = month + 1;
    }
    if (month >= 12) 
    {
            year = year + 1;
            month = month - 12;
    }
    printf("\nthe person is  %d years %d months and %d days old.\n", year, month, days);
    return 0;
}















