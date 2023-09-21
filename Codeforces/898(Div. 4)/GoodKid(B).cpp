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
        int n, mn = 10;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            mn = min(arr[i], mn);
        }

        bool found = false;
        int res = 1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == mn && !found) {
                res*= (arr[i]+1);
                found = true;
            } else {
                res*= arr[i];    
            }
        }

        cout << res << endl;
    }
}