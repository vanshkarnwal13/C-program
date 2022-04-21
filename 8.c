#include <stdio.h>
#include <conio.h>
int main()
{
int n, bn, dn= 0, b = 1, rem;
printf (" Enter a binary number with the combination of 0s and 1s \n");
scanf (" %d", &n);
bn= n;
while ( n > 0)
{
rem = n % 10;
dn = dn + rem * b;
n = n / 10;
b = b * 2;
}
printf ( " The binary number is %d \t", bn);
printf (" \n The decimal number is %d \t", dn);
} 