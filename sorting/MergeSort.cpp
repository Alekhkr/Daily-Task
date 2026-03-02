//merge sort
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
void merge(vector<int>& arr,int low,int mid, int high) {
	vector<int> temp;
	int left = low, right = mid+1;
	while (left <=mid && right<=high) {
		if (arr[left] <= arr[right]) {
			temp.push_back(arr[left]);
			left++;
		}else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while (left <= mid) {
		temp.push_back(arr[left]);
		left++;
	}
	while (right <= high) {
		temp.push_back(arr[right]);
		right++;
	}
	//int j=0;
	for (int i=low; i<=high;i++) {
		arr[i] = temp[i-low];
	}
}
void mergesort(vector<int>& arr, int low, int high) {
	if (high == low) {
		return;
	}
	int mid = (low+high)/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	merge(arr,low,mid,high);
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for (int i=0; i<n; i++) {
    	cin >> arr[i];
    }
    int low = 0,high=n-1;
    mergesort(arr,low,high);
    for (int i=0; i<n;i++){
    	cout << arr[i] << " ";
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
