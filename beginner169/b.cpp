#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

const ll mx = 1e18;

int main() {
	int n;
	cin >> n;
	ll ans = 1;
	bool ng = false; 

	rep(i,n) {
		ll a;
		cin >> a;

		if (a == 0) {
			cout << 0 << endl;
			return 0;
		}
		if (ng || a > mx/ans) {
			ng = true;
		}
		ans *= a;
	}

	if (ng)	cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}