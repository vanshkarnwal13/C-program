#include <stdio.h>
int c=0;
int fib(int n)
{
    if (n <= 1)
        return n;
    else
	{   c=c+1;
		return fib(n - 1) + fib(n - 2);
	}	
		
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%dth Fibonacci value is : %d \n", n, fib(n));
	printf("\n no. of times function is called :  %d ",c);
    return 0;
}