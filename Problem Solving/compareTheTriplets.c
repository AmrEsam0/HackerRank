#include <stdio.h>

int main(){
    
    int arr1[3], arr2[3], arr3[2], score1 = 0, score2 = 0;
    

    for(int i = 0; i < 3; i++){
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < 3; i++){
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < 3; i++){
        if(arr1[i] > arr2[i]){
            score1 += 1;
        }else if(arr2[i] > arr1[i]){
            score2 += 1;
        }else{
            continue;
        }
    }

    arr3[0] = score1;
    arr3[1] = score2;

    for(int i = 0; i < 2; i++){
        printf("%d ", arr3[i]);
    }

    return 0;
}
