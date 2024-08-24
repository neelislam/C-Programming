
#include <stdio.h>

int main() {
    int digit;
    printf("Enter a digit <1 to 10>: ");
    scanf("%d", &digit);

    switch(digit){
        case 0:
        printf("ZERO\n");
        break;
        case 1:
        printf("One\n");
        break;
        case 2:
        printf("Two\n");
        break;
        case 3:
        printf("Three\n");
        break;
        case 4:
        printf("four\n");
        break;
        case 5:
        printf("Five\n");
        break;
        case 6:
        printf("SIX\n");
        break;
        case 7:
        printf("Seven\n");
        break;
        case 8:
        printf("Eight\n");
        break;
        case 9:
        printf("Nine\n");
        break;
        case 10:
        printf("Ten\n");
        break;

    default:
    printf("Not a valid digit!\n");
        }
    // switch case


    printf("___THE END___");

    return 0;
}
