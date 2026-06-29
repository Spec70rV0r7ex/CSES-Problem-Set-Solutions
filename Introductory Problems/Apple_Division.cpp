#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

template<typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void func(int n, vector<int>& p, int i, int x, int& ans) {
    if (i == n) { 
        return;
    }
    x += 2 * p[i];
    ans = ((x >= 0) ? min(ans, x) : ans);
    func(n, p, i + 1, x, ans);
    x -= 2 * p[i];
    func(n, p, i + 1, x, ans);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = LLONG_MAX;
    cin >> n;
    vector<int> p(n, 0LL);
    cin >> p;

    func(n, p, 0LL, -accumulate(all(p), 0LL), ans);
    cout << ans << '\n';

    return 0;
}
