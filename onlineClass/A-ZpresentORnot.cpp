#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int flag = 0;
    
    for(char ch : s) {
        if (isalpha(ch)) {
            flag |= (1 << (tolower(ch) - 'a'));
        }
    }
    
    if (flag == ((1 << 26) - 1)) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
}

int main() {
    fastio;
    int t = 1;
    //cin >> t; // Only if the problem has multiple test cases per file
    while (t--) {
        solve();
    }
    return 0;
}