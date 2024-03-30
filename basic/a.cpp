#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;
	c = b / 100;
	d = b % 100 / 10;
	e = b % 10;

	cout << a * c <<'\n';
	cout << a * d <<'\n';
	cout << a * e <<'\n';
	cout << a * b <<'\n';

	return 0;
}
