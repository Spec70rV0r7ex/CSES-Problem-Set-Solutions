#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if(a + b > n || a == n || b == n || (a == 0 && b != 0) || (b == 0 && a != 0)) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    int i = 0, j = 0;
    for(i = 1; i <= (n - (a + b)); i++) {
        cout << i << " ";
    }
    for(j = n - a + 1; j <= n; j++) {
        cout << j << " ";
    }
    for(; i <= n - a; i++) {
        cout << i << " ";
    }
    cout << '\n';
    for(i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
