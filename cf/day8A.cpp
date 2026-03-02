// Problem: A. Yet Another Two Integers Problem
// Contest: Codeforces - Codeforces Round 667 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1409/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int a,b; cin>>a>>b;
    if (a==b) {
    	cout << 0 << endl;
    	return;
    }
    if (b < a) swap(a,b);
    cout << (((b-a)/10)+((((b-a)%10)>0)?1:0)) << endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t; // Only if the problem has multiple test cases per file
    while (t--) {
        solve();
    }
    return 0;
}
