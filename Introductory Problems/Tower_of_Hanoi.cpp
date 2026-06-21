#include "bits/stdc++.h"
using namespace std;

#define int long long
#define pb push_back

void step(int n, vector<vector<int>>& moves, int fR, int tR, int mR) {
    if (n == 1) {
        moves.pb({fR, tR});
        return;
    }
    step(n - 1, moves, fR, mR, tR);
    moves.pb({fR, tR});
    step(n - 1, moves, mR, tR, fR);
}

void tower_of_hanoi(int n) {
    vector<vector<int>> moves;
    step(n, moves, 1, 3, 2);
    cout << moves.size() << '\n';
    for(vector<int>& move : moves) {
        cout << move[0] << " " << move[1] << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    tower_of_hanoi(n);

    return 0;
}
