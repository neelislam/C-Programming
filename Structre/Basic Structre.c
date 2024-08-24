#include <stdio.h>
#include <string.h>
struct person
{
    char name[50];
    int id;
    float cg;
    char mail[50];
    long long int mobile;
};
int main() {
    printf("Question number 1\n");
printf("******\n");
for(int i=0;i<5;i++){
    printf("**\n");
}
    printf("******\n");
    printf("Question number 2\n");
    for(int i=1; i<=3;i++){
        for(int j=1; j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=2;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }






/*
    printf("Question number 3\n");
    {

        struct person kto[5];

        for (int i = 0; i < 2; i++) {
            printf("Enter name for person%d:", i + 1);
            gets(kto[i].name);
            printf("Enter id for person%d:", i + 1);
            scanf("%d", &kto[i].id);
            fflush(stdin);
            printf("Enter the mail for person%d:", i + 1);
            gets(kto[i].mail);
            printf("Enter the  mobile number for person%d:", i + 1);
            scanf("%lld", &kto[i].mobile);
            printf("Enter the cg-pa:");
            scanf("%f", &kto[i].cg);
            fflush(stdin);
        }

        printf("\n");

        for (int i = 0; i < 2; i++) {
            printf("Name of person%d:", i + 1);
            puts(kto[i].name);
            printf("Id of person%d:", i + 1);
            printf("%d\n", kto[i].id);
            printf("The mail for person%d:", i + 1);
            puts(kto[i].mail);
            printf("The mobile number for person%d", i + 1);
            printf("%lld\n", kto[i].mobile);
            printf("Enter the cg-pa:");
            printf("%.2f\n", kto[i].cg);
        }
    }
    */
        printf("Question 4\n");

char name[50];
printf("je word er size jante chao: ");
gets(name);
//counts space
int i = strlen(name);
printf("With space %d\n", i);
//wont count space
int add=0;
for(int i=0;name[i]!='\0';i++){

    if(name[i]>='a' && name[i]<='z'){
        ++add;}
    else if(name[i]>='A' && name[i]<='Z'){
        ++add;}
    else if(name[i]>='0' && name[i]<='9'){
        ++add;}
}
printf("Word count is: %d\n",add);

printf("Factorial\n");
int sum=1;
for(int i = 1; i<=5;i++){
    printf("%d", i);
    sum *= i;
    if(i<=4) {
        printf("x");
    }
    else{
    printf("=\n");
    }
}
printf("Factorial is: %d\n",sum);




    return 0;
}