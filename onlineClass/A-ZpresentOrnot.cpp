#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    string s;
    int flag = 0;
    for(char ch:s) {
    	flag^= (1<<(ch-'a'));
    }
    if (flag == 0 || ((flag&(flag-1))== 0)) {
    	cout << "yes";
    }else {
    	cout << "no";
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
