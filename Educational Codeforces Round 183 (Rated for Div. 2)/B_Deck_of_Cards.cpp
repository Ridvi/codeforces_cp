#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (k >= n) {
            cout << string(n, '-') << '\n';
            continue;
        }

        int top = 0, bottom = 0, x = 0;
        for (char c : s) {
            if (c == '0') top++;
            else if (c == '1') bottom++;
            else x++;
        }

        vector<char> result(n, '+');
        
        for (int i = 0; i < top; i++) result[i] = '-';
        for (int i = 0; i < bottom; i++) result[n - 1 - i] = '-';
        
        int remaining_start = top;
        int remaining_end = n - bottom - 1;
        
        if (remaining_start > remaining_end) {
            for (char c : result) cout << c;
            cout << '\n';
            continue;
        }
        
        int remaining_length = remaining_end - remaining_start + 1;
        
        if (x * 2 >= remaining_length) {
            for (int i = remaining_start; i <= remaining_end; i++) {
                result[i] = '?';
            }
        } else {
            for (int i = 0; i < x; i++) {
                result[remaining_start + i] = '?';
                result[remaining_end - i] = '?';
            }
        }

        for (char c : result) cout << c;
        cout << '\n';
    }

    return 0;
}
