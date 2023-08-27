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
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if((max(a, b) < min(c, d)) ||  (min(a, b) > max(c, d))) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}