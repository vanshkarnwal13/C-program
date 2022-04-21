#include<stdio.h>
int main(){
    int n=5;
    int sum=0;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<=i;j++){
                sum=sum+j;

        }
    }
    printf("sum of series %d ",sum);
}