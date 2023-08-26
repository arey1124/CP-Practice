#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int find(int n) {
    return n * (n-1) / 2;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int start = 0, end = 2e9, res = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if(find(mid) <= n) {
                res = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        res += n - find(res);

        cout << res << endl;
    }
}