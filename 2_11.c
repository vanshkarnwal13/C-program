#include <stdio.h>
#include <string.h>
void main()
{
	int ctr=0,i,freq=0;
        int t,h,e,spc;
	char str[100];
	printf("Input the string : ");
	fgets(str,sizeof str,stdin);

        ctr=strlen(str);
	for(i=0;i<=ctr-3;i++)
	{
		t=(str[i]=='t');
		h=(str[i+1]=='h');
		e=(str[i+2]=='e');
		spc=(str[i+3]==' ');
		if ((t&&h&&e&&spc)==1)
		   freq++;
	}
	printf("The frequency of the word \'the\' is : %d\n\n",freq);
}
