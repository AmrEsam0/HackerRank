#include <iostream>
#include <cmath>
using namespace std;

void update(int *a, int *b) {
    int temp = *a;
    *a += *b;
    *b = fabs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a;
    cin >> b;

    update(pa, pb);
    cout << a << endl << b << endl;
    return 0;
}