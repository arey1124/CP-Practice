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
        int n,a,q;
        cin >> n >> a >> q;
        string notification;
        cin >> notification;

        bool read = false;
        if(n-a == 0) {
            cout << "YES" << endl;
        } else {
            for(int i=0; i< notification.size(); i++) {
                if(notification.at(i) == '+') {
                    read = true;
                    a++;
                } else {
                    a--;
                }
            }

            if(a-n >= 0) {
                cout << "YES" << endl;
            } else if(n-a == 1 && read) {
                cout << "MAYBE" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}