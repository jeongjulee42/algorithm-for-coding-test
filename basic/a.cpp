#include <bits/stdc++.h>
using namespace std;

int m, t, n;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> t >> m;
	cin >> n;
	cout << ((t * 60 + m + n) / 60) % 24 << " " << (t * 60 + m + n) % 60 << '\n';

	return 0;
}
