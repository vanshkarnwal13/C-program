#include<stdio.h>
int main(){
    printf("Enter n : ");
    int n;
    scanf("%d",&n);
    printf("Pattern 1: \n\n");
    for(int i=0;i<n;i++)
    { 
        for(int j=1;j<n-i;j++)
        {
            printf("   ");
        }
        int t=n; 
        int l;
        for(l=0;l<=i;l++){
            printf(" %d ",t--);
        }

        ++t;
        for(int h=i;h>0;h--)
        { 
            printf(" %d ",++t);
        }
        printf("\n");
    }

      for(int i=n-2;i>=0;i--)
      { 
        for(int j=1;j<n-i;j++)
        {
            printf("   ");
        }

        int t=n; 
        int l;
        for(l=0;l<=i;l++){
            printf(" %d ",t--);
        }

        ++t;
        for(int h=i;h>0;h--)
        { 
            printf(" %d ",++t);
        }
        printf("\n");
    }
}
