//Selection Sort -> minimums
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int n; 
    cin >> n;
    vector<int> nums(n,0);
    for (int i=0; i<n; i++) {
    	cin >> nums[i];
    }
    int mini;
    for (int i=0; i<=n-2; i++) {
    	mini = i;
    	for (int j=i; j <n; j++) {
    		if (nums[j] < nums[mini]) {
	    			mini = j;
    		}
    	}
    	 swap(nums[i],nums[mini]);
    }
    for (int i: nums) {cout << i << " ";	}
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
