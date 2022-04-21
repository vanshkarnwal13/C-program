#include<stdio.h>
int main(){
    float n;
    printf("enter Richter scale: ");
    scanf(" %f", &n);
    if(n<5.0)
    printf("little or no damage");
    else if(5.0<n && n<=5.5)
    printf("some damage");
    else if(5.5<n && n<=6.5)
    printf("serious damage");
    else if(6.5<n && n<=7.5)
    printf("Disaster");
    else
    printf("Higher Catastrophe");

}