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
    bool isHard = false;
    while(t--) {
        int resp;
        cin >> resp;

        if(resp == 1) {
            isHard = true;
        }
    }

    if(isHard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
}