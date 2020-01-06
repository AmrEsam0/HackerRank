#include <iostream>
using namespace std;

int main(){
    int n, arr[102], steps = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i < n; steps++){
            if(arr[i+1] != 1 && i < n-1){
                i+=2;
            }else{
                i++;
            }
    }
    cout << steps << endl;
    return 0;
}