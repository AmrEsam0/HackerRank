#include <iostream>
using namespace std;

int difference(int* arr, int n){
    int diff, max, min;
    max = arr[0];
    min = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    diff = max - min;
    return diff;
}

int main(){
    int n;
    int* arr;
    cin >> n;
    arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << difference(arr, n) << endl;
    return 0;
}