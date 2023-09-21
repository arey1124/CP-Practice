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
       string s, srev;
       cin >> s;
       srev = s;
       int count = 0, idx;
       bool found = true;
       while(found) {
            if((idx = s.find("BA")) != std::string::npos) {
                s.replace(idx, 2, "CB");
                count++;
            } else if ((idx = s.find("AB")) != std::string::npos) {
                s.replace(idx, 2, "BC");
                count++;
            } else {
                 found = false;
            }
        }

        int revCnt = 0;
        found = true;
        while(found) {
                if ((idx = s.find("AB")) != std::string::npos) {
                    s.replace(idx, 2, "BC");
                    revCnt++;
                } else if((idx = s.find("BA")) != std::string::npos) {
                    s.replace(idx, 2, "CB");
                    revCnt++;
                } else {
                    found = false;
                }
        }
        if(revCnt > count) {
            cout << revCnt << endl;
        }else {
            cout << count << endl; 
        }  
    }
}