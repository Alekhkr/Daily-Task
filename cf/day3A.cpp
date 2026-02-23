// Problem: A. Team
// Contest: Codeforces - Codeforces Round 143 (Div. 2)
// URL: https://codeforces.com/problemset/problem/231/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int n ;
    cin >> n;
    int ans = 0, l = 0;
    for (int i=0; i<n; i++) {
    	l = 0;
    	for (int j=0; j<3; j++) {
    		int a;
    		cin >> a;
    		if (a == 1) l++;
    	}
    	if (l >= 2) ans++;
    }
    cout << ans;
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
