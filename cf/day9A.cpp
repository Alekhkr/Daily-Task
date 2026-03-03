// Problem: A. String Task
// Contest: Codeforces - Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/contest/118/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
	string vowels = "ayeiou";
    string s;cin>>s;
    //int vcount=0;
    for (int i=0; i<s.length(); i++) {
    	s[i] = tolower(s[i]);
    	if (vowels.find(s[i]) == string::npos) {
    		cout<<"."<<s[i];
    	}
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
