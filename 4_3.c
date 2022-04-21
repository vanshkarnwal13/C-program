#include<stdio.h>
int sum(int n)
{
    if(n==0){
        return n;
    }
    else{
        return n + sum(n-1);
    }
}
int product(int n)
{
    if(n>0){
        return n * product(n-1);
    }
    else
    return 1;
}

int fibo(int n)
{
    static int n1=0,n2=1,n3;
    if(n>0){
         printf("%d  ",n2);     
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
           
         fibo(n-1);    
    } 

}
int main()
{
    int s=sum(200);
    int p=product(10);
    printf("\nsum of series: %d  ",s);
    printf("\nproduct of series: %d \n",p);
    printf("fibonicci series is:");
    fibo(20);
    return 0;
}