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
       string s;
       cin >> s;
       int sum = 0;
       for(int i=0; i< s.length() - 1; i++) {
            sum += s.at(i) - s.at(i+1);
       }
       if(abs(sum) == (s.length()-1) || ((sum*(-1)) + 1 == (s.length()-1))) {
            cout << "YES" << endl;
       } else {
            cout << "NO" << endl;
       }
    }
}