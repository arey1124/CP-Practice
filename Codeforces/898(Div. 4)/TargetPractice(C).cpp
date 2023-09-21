#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool inBounds(int value, int low, int high) {
    return low <= value && value <= high;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        char arr[10][10];
        for(int i = 0; i < 10; i++ ) {
            for(int j = 0; j < 10; j++) {
                cin >> arr[i][j];     
            }
        }
        int score = 0;
        for(int i = 0; i < 10; i++ ) {
            for(int j = 0; j < 10; j++) {
                if(arr[i][j] == 'X') {
                    if(((i == 0 || i == 9) && inBounds(j, 0, 9)) || ((j == 0 || j == 9) && inBounds(i, 0, 9))) {
                        score += 1;
                    } else if (((i == 1 || i == 8) && inBounds(j, 1, 8)) || ((j == 1 || j == 8) && inBounds(i, 1, 8))) {
                        score += 2;
                    } else if (((i == 2 || i == 7) && inBounds(j, 2, 7)) || ((j == 2 || j == 7) && inBounds(i, 2, 7))) {
                        score += 3;
                    }  else if (((i == 4 || i == 5) && inBounds(j, 4, 5)) || ((j == 4 || j == 5) && inBounds(i, 4, 5))) {
                        score += 5;
                    } else if (((i == 3 || i == 6) && inBounds(j, 3, 6)) || ((j == 3 || j == 6) && inBounds(i, 3, 6))) {
                        score += 4;
                    }
                }
            }
        }

        cout << score << endl;

    }
}