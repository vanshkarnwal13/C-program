#include<stdio.h>
int main(){
    int dig[3]={2,5,7};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if (i!=j && j!=k && i!=k)
                    printf("%d %d %d\n",dig[i], dig[j], dig[k]);

            }
            
        }
    }
}