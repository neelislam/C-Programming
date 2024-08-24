#include <stdio.h>
int sumOfTwoNum(int a, int b){
    int sum = a + b;
    return sum;
}
void printSum(int sum){
    printf("%d", sum);
}
int main() {
    //separation of concern;
    int sum = sumOfTwoNum(1,2);
    printSum(sum);
    // code reuse-ability
    return 420;
}