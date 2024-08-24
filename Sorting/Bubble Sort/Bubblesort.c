#include <stdio.h>

int main() {
    int n, key, temp,elements[100];
    printf("Enter your numbers of elements:\n");
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        printf("Enter the element number %d:", i+1);
        scanf("%d", &elements[i]);
    }
    printf("The array is:");

    for(int i=0; i<n;i++){
        printf("%d ", elements[i]);
    }
    //bubble sort
    printf("\nAfter bubble sorting: ");
    for(int i=0; i<n;i++){
    for(int j=1; j<n;j++){
        if(elements[j]>elements[j+1]){
            temp=elements[j];
            elements[j]=elements[j+1];
            elements[j+1]=temp;
        }

    }
    }
    for(int i=0; i<n;i++){
        printf("%d ", elements[i]);
    }
    return 0;
}
