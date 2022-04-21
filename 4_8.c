#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
 
typedef struct{
    int empCode;
    char empName[30];
    float basic;
    float da;
    float hra;
    float pf;
    float gp;
    float net;

} Employee;
int main()
{
    int n;
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    Employee e[n];
    for(int i=0;i<n;i++){
        printf("Enter the emp number\n");
        scanf("%d",&e[i].empCode);
        printf("Enter the name\n");
        scanf("%s",e[i].empName);
        printf("Enter the emp Basic\n");
        scanf("%f",&e[i].basic);
        e[i].da=0.5* e[i].basic;
        e[i].hra=0.2* e[i].basic  + e[i].da;
        e[i].pf=0.12* e[i].basic + e[i].da;
        e[i].gp=e[i].basic+e[i].hra+e[i].da;
        e[i].net=e[i].gp-e[i].pf;
    }
    int high,count=0;
    high=e[0].gp;
    for(int i=0;i<n;i++){
        if(e[i].gp>high){
            high=e[i].gp;
            count=i;
        }
    }
    printf("\nemp having highest GrossPay %s",e[count].empName);
    float avg=0;
    for(int i=0;i<n;i++){
        avg=avg+e[i].net;
    }
    printf("\navg net pay is %f ",avg/n);
    char temp[100];
    for (int i=0; i < n-1 ; i++) {
		for (int j=i+1; j< n; j++) {
			if(strcmpi(e[i].empName,e[j].empName) > 0) {
				strcpy(temp,e[i].empName);
				strcpy(e[i].empName,e[j].empName);
				strcpy(e[j].empName,temp);
			}
		}
	}
    printf("\nemp in alphabettically order ");
    for(int i=0;i<n;i++){
        printf("\nemp name: %s",e[i].empName);
        printf("\nemp ID: %d",e[i].empCode);
        printf("\nemp NetPay %f",e[i].net);
    }
    



    return 0;
}