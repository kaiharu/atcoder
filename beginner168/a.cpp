#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	int n;
	cin >> n;

	int en = n % 100 % 10;

	if (en == 3) {
		cout << "bon" << endl;
	}
	else if (en == 0 || en == 1 || en == 6 || en == 8) {
		cout << "pon" << endl;
	}
	else {
		cout << "hon" << endl;
	}

}