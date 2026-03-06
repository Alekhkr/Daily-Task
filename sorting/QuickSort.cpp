//QUick SORT --> Pick Any Pivot Element
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void quickSort(vector<int>& nums,int low,int high){
	if (low < high) {
		int pivot = nums[low];
		int i=low, j =high;
		while(i<j)	{
			while (nums[i] <= pivot && i<=high-1)  i++;
			
			while (nums[j] > pivot && j>=low+1) j--;

			if (i<j) {
			 	swap(nums[i],nums[j]);
			}
			
		}
		swap(nums[low],nums[j]);
		quickSort(nums,0,j-1);
		quickSort(nums,j+1,high);
	}

}
void solve() {
    int N; cin>>N;
    vector<int> nums(N);
    for (int i=0; i<N ; i++) cin >> nums[i];
    
    quickSort(nums,0,N-1);
    
    for (int i=0; i<N; i++) cout << nums[i] << " ";
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
