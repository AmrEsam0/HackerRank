#include <iostream>
using namespace std;

int maxOfFour(int numbers[4]){
    int max = numbers[0];
    for(int i = 1; i < 4; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}

int main(){
    int numbers[4];
    for(int i = 0; i < 4; i++){
        cin >> numbers[i];
    }
    cout << maxOfFour(numbers) << endl;
    return 0;
}