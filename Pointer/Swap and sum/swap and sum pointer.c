#include<stdio.h>

void swapping(int *ttr1 , int *ttr2)
{
    int temp;
    temp = *ttr1;
    *ttr1=*ttr2;
    *ttr2=temp;

    printf("After swapping x is = %d\n",*ttr1);
    printf("After swapping y is = %d\n",*ttr2);
}
int main()
{
    //pointer
    int x=10,y=20,rs;
    int *ptr1;
    int *ptr2;

    ptr1=&x;
    ptr2=&y;//ptr1,*ptr1
    rs = *ptr1 + *ptr2;
    printf("Sum is %d\n",rs);
    printf("Before swapping x is = %d\n",*ptr1);
    printf("Before swapping y is = %d\n",*ptr2);
    swapping(&x,&y);
    int num[5]={10,20,30,40,50};
    int *ptr3;
    ptr3=&num[0];
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*ptr3);
        ptr3++;
    }

 return 0;
}