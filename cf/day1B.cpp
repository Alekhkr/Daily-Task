//cf -> https://codeforces.com/contest/71/problem/B
#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
	int n, k ,t,idx=0;
	cin >> n >> k >> t;
	double val = n*k*t*0.01;
	double alpha = k *0.01*100;
	//cout << val << " " <<  alpha << endl;
	while (idx < n && val >= alpha) {
		cout << k << " ";
		alpha += k;
		idx += 1;
	}
	if (idx == n) return;
	alpha -= k;
	double ai = val-alpha;
	//ai += 1;
	
	cout << (ai>=1?int(ai):0) << " ";
	idx += 1;
	while (idx < n) {
		cout << 0 << " ";
		idx++;
	}
	cout << endl;
}
	
	
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}
