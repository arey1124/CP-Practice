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
        string inp;
        cin >> inp; 
        int idx = -1;
        for( int i=0; i<inp.length()-1; i++) {
            if(inp[i] == '1' && inp[i+1] == '1') {
                idx = i;
                break;
            }
        }

        if(idx == -1) {
            cout << "YES" << endl;
        } else {
            bool found = false;
            for( int i = idx; i < inp.length() -1; i++) {
                if(inp[i] == '0' && inp[i+1] == '0') {
                    found = true;
                }
            }

            if(found) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
}