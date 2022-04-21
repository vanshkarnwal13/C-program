#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n+1;i++){
        sum = sum + pow(i,2);
    }
    printf("sum of series is %d",sum);
return 0;
}