#include <stdio.h>
int main() {
   char str[150];
   
   printf("Enter a string: ");
   gets(str); 


   for (int i = 0, j; str[i] != '\0'; i++) {
      while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0')) {
         for (j = i; str[j] != '\0'; ++j) {
            str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
   }
   printf("Output String: ");
   printf(str);
   return 0;
}