#include <stdio.h>
int factorial(int n)  {
    if(n==0) //0 er factorial nai, so 0 hoile amra return kore dbo
    {
        return 1;
    }
  else {
      return n  *   factorial(n-1);
  } 
}


int main() {
int number;
printf("Enter your factorial number: ");
scanf("%d", &number); //ekhane amra number er moddhe nilam j kotor factorial ber korte chai

printf("Ans:%d\n", factorial(number)); //ekhane amra factorial count kore dekhabo

    return 0;
}