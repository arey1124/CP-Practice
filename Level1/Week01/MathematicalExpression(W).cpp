#include <iostream>
#include <string>

using namespace std;

int calculate(int a, int b, string op) {
    if(op == "+") {
        return a+b;
    } else if (op == "-") {
        return a-b;
    } else {
        return a*b;
    }
}

int main() {
    int a, b, c;
    string s, q;
    cin >> a >> s >> b >> q >> c;

    if(c == calculate(a,b,s)) {
        cout << "Yes";
    } else {
        cout << calculate(a,b,s);
    }
}
