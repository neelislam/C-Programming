#include <stdio.h>

int main() {

int a[10] = {5,7,3,8,10,2,9};
int mx = a[0];

for(int i = 1 ; i < 7 ; i++ ){
        if(a[i]<mx){
            mx = a[i];
        }


}
printf("%d\n",mx);





int a[5];

for(int i = 0 ; i < 5; i ++){
    scanf("%d", &a[i]);
  }
 int mx = a[0];
for(int i = 0 ; i < 5 ; i++ ){
        if(a[i]<mx){
            mx = a[i];
        }


}
printf("Minimum is %d\n",mx);
printf("among ");
for(int i = 0; i<5;i++){




    printf("%d", a[i]);
    for(int i = 0; i<4; i++){
     printf(",");}
}

int a =10;
printf("%d %d %d %d\n", a++, --a,++a, a);
return 0 ;}
