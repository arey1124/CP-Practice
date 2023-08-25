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
        int n, m;
        cin >> n >> m;

        

        char **arr = new char*[n];
        for(int i=0; i < n; i++) {
            arr[i] = new char[m];
        }

        for(int i = 0 ; i < n; i++) {
            for(int j = 0; j < m; j ++) {
                cin >> arr[i][j];
            }
        }

        
        char match[4] = {'v', 'i', 'k', 'a'};
        int matchIndx = 0;

        for(int i = 0 ; i < m; i++) {
            for(int j = 0; j < n; j ++) {
                if(arr[j][i] == match[matchIndx]) {
                    matchIndx++;
                    break;
                }
            }
            if(matchIndx == 4) {
                break;
            }
        }

        if(matchIndx == 4) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    
    }
}