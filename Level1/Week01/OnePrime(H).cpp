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
    bool isPrime = true;
    for(int i = 2; i <= t/2; i++) {
        if(t%i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}