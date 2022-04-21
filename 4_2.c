#include<stdio.h>
int main(){
    int a[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    int b[3][3] = {{4,4,4},{5,5,5},{6,6,6}};
    int sum[3][3];
    int diff[3][3];
    int multi[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){    
            multi[i][j]=0;    
            for(int k=0;k<3;k++){    
                multi[i][j] += a[i][k]*b[k][j];    
            }    
        }    
    }
    printf("sum of 2D array");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d  ",sum[i][j]);
        }
    }
    printf("\ndifference of 2D array");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d  ",diff[i][j]);
        }
    }
    printf("\nmultiplication of 2D array");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d  ",multi[i][j]);
        }
    } 
    return 0;
}