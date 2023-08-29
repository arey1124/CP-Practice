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
        int n, mx = 0, maxPos = 0; cin >> n;
        int *a = new int[n];

        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(mx < a[i]) {
                maxPos = i + 1;
                mx = a[i];
            }
        }

        int c = 0, ans = 0;
        for (int i=0; i < n; i++) {

            if(c >= 2 && ans > 0) {
                break;
            }

            if(a[i] == mx) {
                c++;
            } else {
                ans = i + 1;
            }
        }


        if(c >= 2) {
            cout << ans << endl;
        } else {
            cout << maxPos << endl;
        }
    }
}