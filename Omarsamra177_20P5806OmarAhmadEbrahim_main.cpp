#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    cout << "The sum of " << x << " and " << y << " is " << summation(x, y) << endl;
    return 0;
}
