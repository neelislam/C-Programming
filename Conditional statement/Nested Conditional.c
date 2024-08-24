#include <stdio.h>
int main() {


    int i ;
    int j;
    //column
/*
    for(i =1 ; i<=4 ; i++ ){
        //row
        for(j=1 ; j <=4 ; j ++){

            if (i == 1 || i == 4 || j == 1 || j == 4){
                printf("* ");}
                else{
                    printf("  ");
                }

            }
*/



        for(i=1 ; i<=3 ; i++ ){
            //row
            for(j=1 ; j<=5 ; j ++){

                if(i==1 && (j == 1 || j == 2 || j == 4 || j == 5)){
                    printf("  ");}
                else if(i==2 && (j == 1 || j == 5)){
                    printf("  ");
                }
                else{
                    printf("* ");
                }

            }
        printf("\n");
        }
    printf("----END----\n");
return 0;
}

