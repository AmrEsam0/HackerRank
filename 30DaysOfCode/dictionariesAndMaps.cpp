#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    string name;
    long num;
    cin >> n;
    cin.ignore();
    map<string, long> arr;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> num;
        arr[name] = num;
    }
    while (cin >> name) {
        if (arr.find(name) != arr.end()) {
            cout << name << "=" << arr.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}