// Insertion Sort
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int> mp(n,0);
    for (int i=0; i<n; i++) {
    	cin >> mp[i];
    	for (int j=i; j>0; j--) {
    		if (mp[j] <mp[j-1]) swap(mp[j],mp[j-1]);
    	}
    }
    for (int i=0; i<n; i++) cout << mp[i] << " ";
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
