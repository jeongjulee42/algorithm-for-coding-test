#include <bits/stdc++.h>
using namespace std;

int a, b;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;
	if(a > 0 && b > 0) cout << 1 << '\n';
	else if(a > 0 && b < 0) cout << 4 << '\n';
	else if(a < 0 && b < 0) cout << 3 << '\n';
	else cout << 2 << '\n';

	return 0;
}
