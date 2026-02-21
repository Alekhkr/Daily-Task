//codeforces -> https://codeforces.com/problemset/problem/2191/A
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n,0);
	unordered_map<int,int> ymap;
	for (int i=0; i<n; i++) {
		cin >> nums[i];
	}
	int k = 1; //1->red, 0->blue 
	for (int i=0;i<n; i++) {
		ymap.insert({nums[i],k});
		if (k == 1) k=0;
		else k=1;
	}
	
	sort(nums.begin(),nums.end());
	
	for (int i=1; i<n; i++,k++) {
		if(ymap[nums[i-1]] == ymap[nums[i]]) {
			cout << "NO" << endl;
			return;
		}
		
	 }
	cout << "YES" << endl;
 }
	
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {solve();}
	return 0;
}
