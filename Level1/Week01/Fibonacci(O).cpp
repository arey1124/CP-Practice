#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int fibo[51];
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i < 51; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    int t; cin >> t;
    cout << fibo[t-1];
}