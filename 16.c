#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
char c[4];
int n=0;
float a;
loop:
printf("\n1.sin \n2.cos \n3.tan\n4.log\n5.log10\n6.sqrt\n7.Exit\n");
printf("\nEnter your choice: ");
scanf("%d",&n);
    switch(n)
{
case 1: 
    printf("Enter a no: ");
    scanf("%f",&a);
    printf("%f",sin(a));
    break;
case 2:
    printf("Enter a no: ");
    scanf("%f",&a);
    printf("%f",cos(a)); 
    break;
case 3: 
    printf("Enter a no: ");
    scanf("%f",&a);
    printf("%f",tan(a)); 
    break;
case 4: 
    printf("Enter a no: ");
    scanf("%f",&a);
    printf("%f",log(a)); 
    break;
case 5:
    printf("Enter a no: ");
    scanf("%f",&a);
    printf("%f",log10(a)); 
    break;  
case 6: 
    printf("Enter a no: ");
    scanf("%f",&a);
    a=sqrt(a);
    printf("%f",a);
    break;
case 7:
default:
printf("not valid choice");  
}
printf("\ncontinue? yes or no\n");
scanf("%s",c);
    if(strcmp(c,"no")!=0){
    goto loop;
}
return 0;
}