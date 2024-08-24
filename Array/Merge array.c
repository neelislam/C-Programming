#include <stdio.h>

int merge(int arr1[], int n, int arr2[], int m) {
    int plusArray[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            plusArray[k++] = arr1[i++];
        } else {
            plusArray[k++] = arr2[j++];
        }
    }
    while (i < n) {
        plusArray[k++] = arr1[i++];
    }
    while (j < m) {
        plusArray[k++] = arr2[j++];
    }

    int totalLength = n + m;
    int medianIndex = totalLength / 2;

    if (totalLength % 2 == 0) {
        return (plusArray[medianIndex - 1] + plusArray[medianIndex]) / 2;
    } else {
        return plusArray[medianIndex];
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("%d\n", merge(arr1, n, arr2, m));
    return 0;
}