#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, mx = 0;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(a[i], mx); 
            b[i] = 0;
        }

        if(mx > n) {
            cout << "NO" << endl;
        } else {
            for(int i = 0; i < n; i++) {
                b[a[i]-1]++;
            }
            
            for(int i = n - 2; i >= 0; i--) {
                b[i] += b[i + 1];
            }
            
            bool isValid = true;
            for(int i = 0; i < n; i++) {
                if(a[i] != b[i]) {
                    isValid = false;
                }
            }

            if(isValid) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            
        }
    }
}