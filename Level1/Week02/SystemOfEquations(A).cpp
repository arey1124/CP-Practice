#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int m,n; cin >> n >> m;
    int count = 0;

    for (int a = 0; a <= 1000; a++) {
        for(int b = 0; b <= 1000; b++) {
            if(a*a+b==n && b*b+a==m) {
                count++;
            }
        }
    }

    cout << count << endl;
}