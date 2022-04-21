#include <stdio.h>
#include <string.h>

int main() {
   char str[50][50], temp[50];
   int n;
   printf("enter number of friends: ");
   scanf("%d",&n);
   printf("Enter friends name: \n");

   for (int i = 0; i < n; i++) {
      scanf(" %s",str[i]);
   }
   for (int i = 0; i < 5; i++) {
      for (int j = i + 1; j < 5; j++) {
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      printf(str[i]);
      printf("\n");
   }
   return 0;
}