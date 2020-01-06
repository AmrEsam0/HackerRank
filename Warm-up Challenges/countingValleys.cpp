#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l, height = 0, count = 0;
    string str;

    cin >> l >> str;
    
    for(int i = 0; i < l; i++){
        if(str[i] == 'U'){
            height++;
        }else{
            if (height == 0){
                count++;
            }
            height--;
        }
    }
    if (height < 0){
        count--;
    }
    cout << count << endl;
    return 0;
}