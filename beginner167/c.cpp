#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	int n, m, x;
	cin >> n, m, x;

	vector<vector<int>> data(n, vector<int>(m+1));
	rep(i, n) {
		rep(j, m+1) {
			cin >> data.at(i).at(j);
		}
	}

	rep(i, n) {
		rep(j, m+1) {
			data.at(i).at(j)
		}
	}

	return 0;
}