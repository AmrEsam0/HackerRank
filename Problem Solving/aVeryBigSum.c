#include <stdio.h>

int main(){

    int n;
    long int sum = 0, temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%ld", &temp);
        sum += temp;
    }
    printf("%ld", sum);

    return 0;
}