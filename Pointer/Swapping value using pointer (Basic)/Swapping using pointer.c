#include <stdio.h>
void swap(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    
int sneha= 100;
int neel= 1;
printf("Before swapping, Sneha = %d, Neel=%d\n", sneha,neel);
swap(&sneha,&neel);
printf("After swapping, Sneha = %d, Neel=%d\n", sneha,neel);

    return 0;
}