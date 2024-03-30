#include <bits/stdc++.h>
using namespace std;

int a;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a;
	if(a % 400 == 0) cout << 1 << '\n';
	else if (a % 100 == 0) cout << 0 << '\n';
	else if (a % 4 == 0) cout << 1 << '\n';
	else cout << 0 << '\n';

	return 0;
}
