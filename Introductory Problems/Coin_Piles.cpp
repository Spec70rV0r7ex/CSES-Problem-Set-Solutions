#include "bits/stdc++.h"
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b
        if (2 * min(a, b) >= max(a, b) && (a + b) % 3 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}

// 2y - x = 0 mod 3
// 2y - x + 3x = 0 mod 3 (Adding a multiple of 3)
// 2y + 2x = 0 mod 3
// 2(x + y) = 0 mod 3
// (x + y) = 0 mod 3
