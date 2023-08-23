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
        int n, evn = 0, odd = 0;

        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            int val;
            cin >> val;
            if(val%2 == 0) evn++;
            else odd++; 
            a.push_back(val);
        }

        if(n%2 != 0) {
            cout << -1 << endl;
        } else {
            cout << (max(odd,evn)-(n/2)) << endl;
        }
    }
}