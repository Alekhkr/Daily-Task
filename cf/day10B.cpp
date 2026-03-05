// Problem: B. Yuu Koito and Minimum Absolute Sum
// Contest: Codeforces - Codeforces Round 1065 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2171/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int> arr(n,0);
    for  (int i=0; i<n; i++)  cin>>arr[i];
    if (arr[n-1] == -1 || arr[0] == -1) {
    	 cout << 0 << endl;
    }else{
    	cout << abs(arr[n-1]-arr[0]) << endl;
    }
    for (int i=0;i<n;i++) {
    	if (arr[0] ==-1 && arr[n-1] !=-1) arr[0] = arr[n-1];
    	if (arr[0] != -1 && arr[n-1] == -1) arr[n-1] =arr[0];
    	cout << ((arr[i] ==-1)?0:arr[i]) <<  " ";
    }
    cout << endl;
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
