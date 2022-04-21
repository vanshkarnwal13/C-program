#include <stdio.h>
int main()
{
int num;
printf( "enter student’s grade from 1 to 5 : ");
scanf("%d", &num);
switch(num)
{
case 1:
printf("fail ");
break;
case 2:
printf("bad");
break;
case 3:
printf("good ");
break;
case 4:
printf("very good ");
break;
case 5:
printf("excellent ");
break;
default:
printf("false grade");
}
return 0;
}