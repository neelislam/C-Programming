#include <stdio.h>
int main(){
float average;
int size;
double sum=0;
printf("how many number u want to calculate: ");
scanf("%d", &size);
int array[size];
printf("Enter the numbers: ");
for(int i=0; i<size;i++){
    scanf("%d", &array[i]);
 sum+=array[i];
}
average = (float)sum/ size;

printf("Sum of the array: %.2f\n", sum);
printf("Average of the array %.2f\n", average); 

    return 0;
}