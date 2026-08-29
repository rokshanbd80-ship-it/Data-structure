#include <iostream>
using namespace std;

int main() {
    int x = 23;
    int *p;
    p = &x;
    cout << "Memor Address of 'x' is " << p;
}
