#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	int k;
	string s;
	cin >> k >> s;

	if (s.size() > k) {
		rep(i,k) {
			cout << s.at(i);
		}
		cout << "..." << endl;
	}
	else {
		cout << s << endl;
	}

	return 0;
}