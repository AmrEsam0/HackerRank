#include <iostream>
#include <vector>
using namespace std;

void displayList(vector<int> list) {
    cout << list.size() << endl;
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }
}

vector<int> modify(vector<int> list, int w, int s, int e) {
    list.erase(list.begin() + w - 1);
    list.erase(list.begin() + s - 1, list.begin() + e - 1);
    return list;
}

int main() {
    vector<int> list;
    int n, number, w, s, e;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> number;
        list.push_back(number);
    }
    cin >> w;
    cin >> s >> e;
    cin.ignore();

    list = modify(list, w, s, e);
    displayList(list);

    cout << endl;
    return 0;
}
