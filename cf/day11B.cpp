// Problem: B. Your Name
// Contest: Codeforces - Codeforces Round 1062 (Div. 4)
// URL: https://codeforces.com/problemset/problem/2167/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int N;
    cin >> N;
    string S,T;
    cin >> S >> T;
    if (S.length() != T.length()){
    	cout << "NO" << endl; return;
    }
    unordered_map<int,int> map;
    for (int i=0; i<S.length() ; i++) {
    	map[S[i]]++;
    	map[T[i]]--;
    }
    for (auto& [key,val] : map) {
    	if (val != 0) {
    		cout << "NO" <<endl;return;
    	}
    }
    cout << "YES" << endl;
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
