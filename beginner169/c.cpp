#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	ll a;
	long double b;
	cin >> a >> b;

	ll B = b * 100 + 0.5;
	ll ans = a * B / 100;

	cout << ans << endl;
	return 0;
}