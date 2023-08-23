#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int k, s, count = 0; cin >> k >> s;
    for(int x = 0; x <= k; x++) {
        for(int y = 0; y <= k; y++) {
            int z = s-y-x;
            if(z >= 0 && z <= k) count++;
        }
    }

    cout << count;
}