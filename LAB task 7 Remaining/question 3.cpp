#include <stdio.h>
 int main(){
    int arr[12], s[6];
    int i;
    printf("Enter 12 numbers: \n");
    for (i = 0; i < 12; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 6; i++){
        s[i] = arr[2*i] + arr[2*i + 1];  
    }
    printf("\nOriginal Array: ");
    for(i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSum of Pairs: ");
    for(i = 0; i < 6; i++){
        printf("%d ", s[i]);
    }

    return 0;
}
