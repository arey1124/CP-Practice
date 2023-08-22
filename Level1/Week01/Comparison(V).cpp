#include <iostream>
#include <string>

using namespace std;

bool compare(int a, int b, string op) {
    if(op == "<") {
        return a < b;
    } else if(op == ">") {
        return a > b;
    } else {
        return a == b;
    }
}

int main() {
    int a, b;
    string s;
    cin >> a >> s >> b;
    if(compare(a,b,s)) {
        cout << "Right";
    } else {
        cout << "Wrong";
    }
}
