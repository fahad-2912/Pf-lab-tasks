#include <stdio.h>

int main() {
    int array[20];  
    printf("Enter 20 numbers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &array[i]);
    }

     printf("The elements in reverse order are: ");
    for (int i = 19; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n"); 

    return 0;
}
