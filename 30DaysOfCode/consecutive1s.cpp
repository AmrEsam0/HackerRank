#include <iostream>
using namespace std;

// decimal to binary function
int d2b(int num) {
    int b = 0, k = 1;

    while (num) {
        b += (num % 2) * k;
        k *= 10;
        num /= 2;
    }
    return b;
}

int consecutive1s(int num) {
    int count = 0;
    while (num != 0) {
        num = num & (num << 1);
        count += 1;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    cout << consecutive1s(n) << endl;

    return 0;
}