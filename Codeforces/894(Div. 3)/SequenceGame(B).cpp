#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int *b = new int[n];

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> ans = {b[0]};

        int res = 1;
        for(int i = 1; i < n; i++) {
            if(ans.back() > b[i]) {
                ans.push_back(1);
            }
            ans.push_back(b[i]);
        }

        cout << ans.size() << endl;
	
        for(auto it : ans) {
            cout << it << " ";
        } 
        
        cout << endl;
    }
}