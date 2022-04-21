#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n;
void odd_even(int n){
    if(n%2==0){
        printf("number is even");
    }
    else
    printf("number is odd");

}

void prime(int n){
    int i,m=0,flag=0;     
    m=n/2;    
    for(i=2;i<=m;i++)    
    {    
    if(n%i==0)    
    {    
    printf("Number is not prime");    
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    printf("Number is prime");
}

void fact(int n){
    int p=1;
    for(int i=1;i<n+1;i++){
        p=p*i;
    }
    printf("factorial of number is %d ",p);


}

int main(){
    int num;
    while(1)
    {
    printf("\nenter a number: ");
    scanf("%d",&n);
    printf("\nenter the operation number:\n1:odd or even \n2:prime \n3:factorial \n4:exit \n");
    scanf("%d",&num);
    switch(num){
        case 1:
        odd_even(n);
        break;
        case 2:
        prime(n);
        break;
        case 3:
        fact(n);
        break;
        case 4:
        exit(0);
        break;
    }
    
    }
return 0;
}