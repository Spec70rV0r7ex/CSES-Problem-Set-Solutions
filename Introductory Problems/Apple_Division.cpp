#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

template<typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void func(int n, vector<int>& p, int i, int& m, int x) {
    if (i == n) { 
        return;
    }
    x += 2 * p[i];
    m = ((x >= 0) ? min(m, x) : m);
    func(n, p, i + 1, m, x);
    x -= 2 * p[i];
    func(n, p, i + 1, m, x);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m = LLONG_MAX;
    cin >> n;
    vector<int> p(n, 0LL);
    cin >> p;

    func(n, p, 0LL, m, -accumulate(all(p), 0LL));
    cout << m << '\n';

    return 0;
}
