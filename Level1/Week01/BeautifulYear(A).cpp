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
    for(int i=t+1; i <= t+10000; i++) {
        int temp = i;
        int count[10] = {};

        while(temp > 0) {
            count[temp%10]++;
            temp/=10;
        }

        bool beautiful = true;
        for(int j=0; j<10; j++) {
            if(count[j] > 1) {
                beautiful = false;
                break;
            }
        }

        if(beautiful) {
            cout << i << endl;
            break;
        }
    }
}