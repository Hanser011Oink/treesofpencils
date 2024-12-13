#include <stdio.h>

int main() {
    int n, val, pos;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Input the value to be inserted: ");
    scanf("%d", &val);
    
    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &pos);
    
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    printf("After Insert the element the new list is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

//Ques. Write a program in C to insert values in the array (unsorted list).