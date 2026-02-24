//BUBBLE SORT -> adj swaps
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
	int n; cin>> n;
    vector<int> nums(n,0);
    for (int i=0; i<n; i++) cin >> nums[i];
    int k = n-1;
    int swaps = 0;
    while (k>0) {
    	for (int i=0; i<k; i++) {
    		if (nums[i] > nums[i+1]) 
    			{swap(nums[i],nums[i+1]);swaps=1;}
    	}
    	if (swaps == 0) break;
    	k--;
    }
    for (int i=0; i<n; i++) {
    	cout << nums[i] << " ";
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
