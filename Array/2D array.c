#include <stdio.h>
int main(){
int a[5][5]={{1,2,3},
                {4,5,6},
                {7,8,9}};



for(int j=2;j>=0;j--){
 for(int i=2;i>=0;i--){
         printf(" %d ",a[i][j]);
     }
     printf("\n");
 }









return 0; }
