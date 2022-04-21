#include<stdio.h>
int fact(int n)
{
    if (n == 1 )
        return 1;
    return n * fact(n - 1);
}

int main(){
    int  n;
    float a,b;
    float sum=0.0f;
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        a=fact(i);
        b=fact(i+1);
        sum=sum+ (a/b);

    }
    printf("sum of series is: %f ",sum);
}