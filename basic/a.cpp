#include <bits/stdc++.h>
using namespace std;

int a;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a;
	if(a >= 90) cout << 'A' << '\n';
	else if(a >= 80) cout << 'B' << '\n';
	else if(a >= 70) cout << 'C' << '\n';
	else if(a >= 60) cout << 'D' << '\n';
	else cout << 'F' << '\n';

	return 0;
}
