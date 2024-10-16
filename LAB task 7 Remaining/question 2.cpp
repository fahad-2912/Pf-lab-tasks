#include <stdio.h>
 int main(){
    int arr[10];
    int sarr[10];
    int i;
    printf("Enter 10 numbers: \n");
    for (i = 0; i <10; i++) {
        printf("Enter element %d: ",i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 9; i++){
        sarr[i] = arr[i +1];
     }
    sarr[9] = arr[0]; 
    printf("\nOriginal Array: ");
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\nShifted Array: ");
    for(i = 0; i < 10; i++){
        printf("%d ", sarr[i]);
    }

    return 0;
}

