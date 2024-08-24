#include <stdio.h>
int sum(double num1, double num2){
     printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
}
int sub(double num1, double num2){
     printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
}
int mul(double num1, double num2){
     printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
}

int div(double num1, double num2){
     if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero.\n");
}

int main() {
    int ar_korbi = 1; // Add semicolon
    char operator; // for * + / -
    double num1, num2; // duita number niye kaj korbo

    while (ar_korbi) { // Use ar_korbi to control the loop
        printf("Enter an operator: ");
        scanf(" %c", &operator); // Add space before %c to consume newline
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2); // lf mane double input newar

        switch (operator) {
            case '+':
              sum(num1,num2);//just called the fucntion
                break;
            case '-':
               sub(num1,num2);
                break;
            case '*':
               mul(num1,num2);
                break;
            case '/':
               div(num1,num2);
                break;
            default:
                printf("Invalid input! Please try again...\n");
        }

        printf("Ar korbi? 0 = No || 1 = Yes: ");
        scanf("%d", &ar_korbi);
    }

    return 0;
}