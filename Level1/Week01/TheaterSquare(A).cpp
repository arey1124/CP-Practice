#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n,m,a, count = 0; cin >> n >> m >> a;

    int c = ceil((double) n /a);
    int r = ceil((double) m/a);

    cout << c*r;
}