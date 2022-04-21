#include<stdio.h>
#include<string.h> 
int main()
{
  	char str[100];
  	int k,a,b, pos;
 
  	printf("\n Please Enter any String :  ");
  	scanf(" %s", str);
  	 	
  	for(int i = 0; i < str[i+1] != '\0'; i++)
  	{
        a = (int)str[i];
  		for(int j = i+1; str[j] != '\0'; j++)
  		{
  			b = (int)str[j];
            if(a==b || a==(b+32) || a==(b-32) )  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
                str[k] = '\0';
 			}
		}
	}	
	printf("\n The Final String after Removing All Duplicates: %s ", str);	
  	return 0;
}