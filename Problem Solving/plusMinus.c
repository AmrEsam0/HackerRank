#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    double ps = 0, ns = 0, zs = 0, positive, negative, zero;
    double* arr;

    scanf("%d", &n);

    arr = malloc(n * sizeof(double));
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            ps += 1;
        }else if(arr[i] < 0){
            ns += 1;
        }else{
            zs += 1;
        }
    }

    positive = ps / n;
    negative = ns / n;
    zero = zs / n;

    printf("%f\n", positive);
    printf("%f\n", negative);
    printf("%f", zero);

    free(arr);
    return 0;
}