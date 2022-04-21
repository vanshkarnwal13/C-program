#include<stdio.h>
int main(){
    printf("formula used i = 2 + (y+0.5x)");
    printf("table of i \n");
    for(int y=1;y<7;y++){
        for(float x=5.5;x<13;x=x+0.5){
            float p=0;
            p= 2 + (y+ 0.5*x);
            printf("\n2 + (%d+0.5*%0.1f) = %0.1f",y,x,p);

        }
    }

}