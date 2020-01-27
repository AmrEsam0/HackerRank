#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> getList(string str) {
    vector<int> list;
    string W;
    istringstream s(str);
    while (getline(s, W, ',')) {
        list.push_back(stoi(W));
    }
    return list;
}

int main() {
    vector<int> nums;
    string str;
    getline(cin, str);
    nums = getList(str);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    cout << endl;
    return 0;
}
