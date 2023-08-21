#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;

    long long a,b;

    while(n--) {
        cin >> a >> b;
        if(a > b) {
            swap(a,b);
        }
        long long sum = (b * (b+1) / 2) - ((a-1) * (a) / 2);
        cout << sum << endl;
    } 
}
