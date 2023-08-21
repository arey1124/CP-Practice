#include <iostream>
using namespace std;
 
int main() {
  int a, b, c;
  cin >> a >> b >> c;
 
  if(a>b) {
    if(b>c) {
      cout << c << endl << b << endl;
    } else {
      cout << b << endl << c << endl;
    }
    cout << a << endl;
  } else {
    if(a > c) {
      cout << c << endl << a << endl << b << endl;
    } else if (b > c) {
      cout << a << endl << c << endl << b << endl;
    } else {
      cout << a << endl << b << endl << c << endl;
    }
  }
 
  cout << "\n" << a << endl << b << endl << c << endl;
  
}