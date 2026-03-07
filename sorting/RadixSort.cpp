#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

    void radixSort(vector<int>& nums) {
        int n = nums.size();

        int minVal = *min_element(nums.begin(),nums.end());
        if (minVal < 0) {
            for (int& num:nums) {
                num -= minVal;
            }
        }

        int maxVal = *max_element(nums.begin(),nums.end());
        long long  k =1;
        while (maxVal/k > 0) {
            vector<vector<int>> radixArray(10);
            for (int num: nums) {
                int radixIndex = (num/k) %10;
                radixArray[radixIndex].push_back(num);
            }
            int i=0;
            for (vector<int>& numbers: radixArray) {
                for (int num : numbers) {
                    nums[i++] = num;
                }
            }
            k *= 10;
        }
        if (minVal < 0) {
            for (int& num: nums) {
                num += minVal;
            }
        }
    }
    void solve() {
    	int N; cin >> N;
    	vector<int> nums(N);
    	for (int i=0; i<N; i++) cin >> nums[i];
    	
    	radixSort(nums);
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
