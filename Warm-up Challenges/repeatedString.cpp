#include <iostream>
#include <string>
using namespace std;


int main(){
    string str;
    cin >> str;
    long long n;
    cin >> n;
    
    long long initCount = 0;
    
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'a') {
            initCount++;
        }
    }
    
    long long finalCount = (n/str.size()) * initCount;
    

    for(int i = 0; i < n % str.size(); i++) {
        if(str[i] == 'a') {
            finalCount++;
        }
    }
    cout << finalCount << endl;
    return 0;
}