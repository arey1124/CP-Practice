#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;

    if ( c >= 'a' && c <= 'z') {
        cout << (char)toupper(c);
    } else {
        cout << (char)towlower(c);
    }
}
