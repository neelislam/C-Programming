#include <stdio.h>
int main() {
    int a;
    int i;
    int j;
    int row;
    char alphabet;
    printf("1-Half Pyramid of *\n");
    printf("2-Half Pyramid of Numbers\n");
    printf("What You want to see? : ");
    scanf("%d", &a);


//Half Pyramid of *
if(a == 1){
   printf("Enter the number of rows:");
   scanf("%d", &row);
   for (i = 1; i <= row; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
    }


//Half Pyramid of Numbers
else if(a == 2){
   printf("Enter the number of rows:");
   scanf("%d", &row);
   for (i = 1; i <= row; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
}
else{
    printf("Invalid input");
}


   return 0;
}
