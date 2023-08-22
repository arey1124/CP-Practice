#include <iostream>

using namespace std;

int main() {
    float n;
    cin >> n;

    float whole = floor(n);
    float decimal = n - whole;
    if(decimal == 0) {
        cout << "int " << whole;
    } else {
        cout << "float " << whole << " " << decimal;
    }
}
