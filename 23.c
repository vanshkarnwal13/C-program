#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("enter two number :");
    scanf("%d %d",&x,&y);
    int x1,x2,x3,x4;
    int y1,y2,y3,y4;
    x1=x2=x3=x4=x;
    y1=y2=y3=y4=y;
    printf("\nvalue of x before swapping : %d",x);
    printf("\nvalue of y before swapping : %d",y);
    printf("\n");
    printf("\nswapping using third variable");
    int c;
    c=y1;
    y1=x1;
    x1=c;
    printf("\nvalue of x after swapping : %d",x1);
    printf("\nvalue of y after swapping : %d",y1);
    printf("\n");
    printf("\nswapping using bitwise operator");
    x2 = x2 ^ y2;
    y2 = x2 ^ y2;
    x2 = x2 ^ y2;
    printf("\nvalue of x after swapping : %d",x1);
    printf("\nvalue of y after swapping : %d",y1);
    printf("\n");
    printf("\nswapping using + and -");
    x3=x3+y3;
    y3=x3-y3;
    x3=x3-y3;
    printf("\nvalue of x after swapping : %d",x1);
    printf("\nvalue of y after swapping : %d",y1);
    printf("\n");
    printf("\nswapping using * and /");
    x4=x4*y4;
    y4=x4/y4;
    x4=x4/y4;
    
    printf("\nvalue of x after swapping : %d",x1);
    printf("\nvalue of y after swapping : %d",y1);
    

}