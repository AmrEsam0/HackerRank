#include <stdio.h>
#include <stdlib.h>

int getRounded(int number){
    int initial, final;

    if(number < 38){
        return number;
    }else{
        initial = number / 5;
        final = (initial + 1) * 5;

        if((final - number) < 3){
            return final;
        }else{
            return number;
        }
    }
}



int main() {

    int n;
    int* grades;


    scanf("%d", &n);

    grades = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &grades[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", getRounded(grades[i]));
    }
    return 0;
}