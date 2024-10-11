#include <stdio.h>

int main() {
    int array[15];  
    int sum = 0;   

    printf("Enter 15 numbers:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &array[i]);
    }

     for (int i = 0; i < 15; i++) {
        sum += array[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
