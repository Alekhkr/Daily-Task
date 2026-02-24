// Problem: A. Bit++
// Contest: Codeforces - Codeforces Round 173 (Div. 2)
// URL: https://codeforces.com/problemset/problem/282/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int val=0, n=0;
    cin >> n;
    unordered_map<string,int> mp = {{"++X",1},{"X++",1},{"--X",-1},{"X--",-1}};
    for (int i=0; i<n; i++) {
    	string a; cin>>a;
    	val += mp[a];
    }
    cout << val ;
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
