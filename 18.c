#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int a[10];
    char c[4];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    loop:
    printf("enter a number(0-9): ");
    scanf("%d",&n);
    switch(n){
        case 0:
        a[n]++;
        break;
        case 1:
        a[n]++;
        break;
        case 2:
        a[n]++;
        break;
        case 3:
        a[n]++;
        break;
        case 4:
        a[n]++;
        break;
        case 5:
        a[n]++;
        break;
        case 6:
        a[n]++;
        break;
        case 7:
        a[n]++;
        break;
        case 8:
        a[n]++;
        break;
        case 9:
        a[n]++;
        break;
        default:
        printf("invalid number");
    }
    printf("\ncontinue? yes or no\n");
    scanf("%s",c);
    if(strcmp(c,"no")!=0){
    goto loop;
}
for(int i=0;i<10;i++){
        printf("\n count of %d is :%d",i,a[i]);
    }

}