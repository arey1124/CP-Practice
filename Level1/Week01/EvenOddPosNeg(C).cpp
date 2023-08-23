#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int ev = 0, odd = 0, pos = 0, neg = 0;
    while(t--) {
        int num;
        cin >> num;
        if(num % 2 == 0) {
            ev++;
        } else {
            odd++;
        }

        if(num > 0) {
            pos++;
        } else if (num !=0) {
            neg++;
        }
    }

    cout << "Even: " << ev << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}