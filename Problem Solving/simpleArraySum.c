#include <stdio.h>
#include <stdlib.h>

int main(){
    int numbers, num, sum = 0;
    int* arr;

    printf("Enter array size / numbers to sum: ");
    scanf("%d", &numbers);
    arr = (int*)malloc(numbers * sizeof(int));

    printf("Enter %d elements: ", numbers);

    for (int i = 0; i < numbers; i++){
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i = 0; i < numbers; i++){
        sum += arr[i];
    }
    
    printf("Sum = %d\n", sum);

    return 0;
}