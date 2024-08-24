#include <stdio.h>
int main(){
    int count =0;
int numbers[10];
for(int i=0; i<=4; i++){
    printf("Number %d:",i+1);
    scanf("%d", &numbers[i]);}
printf("Output\n");
    for(int i=0; i<=4; i++){
        printf("Number : %d\n", numbers[i]);
    }
    for(int i = 0; i <=4; i++) {
        for(int j = i+1 ; j <=4; j++) {
            if(numbers[i] == numbers[j])
                printf("Duplicate %d\n", numbers[j]);}}
    return 0;}
