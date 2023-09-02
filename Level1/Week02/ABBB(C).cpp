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
        string inp; cin >> inp;
        vector<int> rem;
        for(int i=0; i<inp.length(); i++) {
            if(rem.size() != 0 && inp[i] == 'B') {
                rem.pop_back();
            } else {
                rem.push_back(inp[i]);
            }
        }

        cout << rem.size() << endl;
    }
}
