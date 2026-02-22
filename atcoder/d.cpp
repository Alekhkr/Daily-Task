//atcoder -> https://atcoder.jp/contests/abc446/tasks/abc446_d
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
	int n;
	cin>>n;
    unordered_map<int,int> dp;
    int ans = 1;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        dp[k] = dp[k-1]+1;
        ans = max(ans , dp[k]);
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
} 
