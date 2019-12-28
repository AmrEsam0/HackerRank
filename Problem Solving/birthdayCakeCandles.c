#include <stdio.h>
#include <stdlib.h>

int main() {

    int max, n, x = 0;
    int* arr;

    scanf("%d", &n);
    arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(max == arr[i]){
            x += 1;
        }
    }

    printf("%d", x);



    return 0;
}