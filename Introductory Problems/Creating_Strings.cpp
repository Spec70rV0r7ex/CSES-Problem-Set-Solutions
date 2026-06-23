#include "bits/stdc++.h"
using namespace std;

#define int long long

template<typename T>
ostream& operator<<(ostream& out, const set<T>& v) {
    for (const auto& x : v) out << x << '\n';
    return out;
}

void permute(string& s, int index, set<string>& ans) {
    if(s.size() == index) {
        ans.insert(s);
        return;
    }

    for(int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);
        permute(s, index + 1, ans);
        swap(s[i], s[index]);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    set<string> ans;
    cin >> s;

    permute(s, 0, ans);

    cout << ans.size() << '\n';
    cout << ans;

    return 0;
}
