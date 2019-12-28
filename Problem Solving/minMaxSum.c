#include <stdio.h>
#include <inttypes.h>

int main() {

    int64_t arr[5], sum[5], temp = 0,  sum1 = 0, sum5 = 0, skip = 0, max, min;

    for(int i = 0; i < 5; i++){
        scanf("%" SCNd64, &arr[i]);
    }

    for(int i = 0; i < 5; i++){
        skip = i;
        for(int j = 0; j < 5; j++){
            if(j == skip){
                temp += 0;
            }else{
                temp += arr[j];
            }
        }
        sum[i] = temp;
        temp = 0;
    }

    min = sum[0];
    max = sum[0];
    
    for(int i = 0; i < 5; i++){
        if(sum[i] > max){
            max = sum[i];
        }else if(sum[i] < min){
            min = sum[i];
        }
    }

    printf("%" PRId64 " ", min);
    printf("%" PRId64, max);
    return 0;
}