#include <bits/stdc++.h>
using namespace std;

int n, p, sum;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> p;
	cin >> n;
	for(int i = 0; i < n; i++){
		int t = 0;
		int r = 0;
		cin >> t >> r;
		sum += t * r;
	}
	if(sum == p) cout << "Yes" << '\n';
	else cout << "No" << '\n';

	return 0;
}
