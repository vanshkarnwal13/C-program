#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main()
{
	char a[100];
	char b[100];
	
	int p=0,r=0,i=0;
	int t=0;
	int x,g,s,n,o;
	printf("Enter First String:");
	gets(a);
	printf("Enter Second String:");
	gets(b);
	printf("Enter the position where the item has to be inserted: ");
	scanf("%d",&p);
	r = strlen(a);
	n = strlen(b);
	s = n+r;
	o = p+n;
	if(p>0 & p<r){
        for(i=p;i<s;i++)
	    {
		    x = a[i];
		    if(t<n)
		    {
			    a[i] = b[t];
			    t=t+1;
		    }
		    a[o]=x;
		    o=o+1;
	    }
    }
	printf("%s", a);
}