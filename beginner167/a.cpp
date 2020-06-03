#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	string s, t;
	cin >> s >> t;
	bool ng = false;

	rep(i, s.size()) {
		if (s.at(i) != t.at(i)) {
			ng = true;
		}
	}

	if (ng) cout << "No" << endl;
	else cout << "Yes" << endl;

	return 0;
}