///codeforces -> https://codeforces.com/contest/71/problem/A
#include <iostream>
#include <string>
using namespace std;
void solve(){
	string s;
	cin >> s;
	if (s.size()<= 10) {
		cout << s << endl;
		return;
	}
	int size = s.size();
	cout << s[0] << size-2 << s[size-1] << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) { solve();}
	return 0;
}
