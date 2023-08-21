#include <iostream>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  int rem = (a > b) ? a % b : b % a;
  cout << ((rem == 0) ? "Multiples" : "No Multiples") << endl;
}