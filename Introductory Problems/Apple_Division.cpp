#include "bits/stdc++.h"
using namespace std;

#define int long long
#define pub push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()

template<typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void func(vector<int>& p, int i, int n, int& m, int x) {
    if (i == n) { 
        return;
    }
    x += 2 * p[i];
    m = ((x >= 0) ? min(m, x) : m);
    func(p, i + 1, n, m, x);
    x -= 2 * p[i];
    func(p, i + 1, n, m, x);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m = LLONG_MAX;
    cin >> n;
    vector<int> p(n, 0LL);
    cin >> p;
    int x = -((long long)accumulate(all(p), 0LL));
    func(p, 0LL, n, m, x);
    cout << m << '\n';
    return 0;
}
