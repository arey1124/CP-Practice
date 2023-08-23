#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, j = 2; cin >> t;
    
    for(int i=2; i <= t; i++) {
        bool isPrime = true;
        for(int j = 2; j < i; j++) {
            if(i%j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << i << " ";
        }
    }
}