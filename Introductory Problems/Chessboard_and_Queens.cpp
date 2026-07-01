#include "bits/stdc++.h"
using namespace std;

#define int long long
#define pb push_back

template<typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

bool is_safe(vector<string>& board, int r, int c) {
    if(board[r][c] == '*') {
        return false;
    }

    int i = r - 1, j = c - 1;
    while(i >= 0 && j >= 0) {
        if(board[i][j] == 'q') {
            return false;
        }
        i--, j--;
    }

    j = c - 1;
    while(j >= 0) {
        if(board[r][j] == 'q') {
            return false;
        }
        j--;
    }

    i = r + 1, j = c - 1;
    while(i < 8 && j >= 0) {
        if(board[i][j] == 'q') {
            return false;
        }
        i++, j--;
    }

    return true;
}

void func(vector<string>& board, int c, int& count) {
    if(c == 8) {
        count++;
        return;
    }

    for(int r = 0; r < 8; r++) {
        if(is_safe(board, r, c)) {
            board[r][c] = 'q';
            func(board, c + 1, count);
            board[r][c] = '.';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 0;
    vector<string> board(8);
    cin >> board;

    func(board, 0LL, count);
    cout << count << '\n';

    return 0;
}
