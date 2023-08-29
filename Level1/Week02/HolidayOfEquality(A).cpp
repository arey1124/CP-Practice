#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, mx = 0 ; cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mx = max(arr[i], mx);
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (mx-arr[i]);
    }

    cout << ans << endl;
}