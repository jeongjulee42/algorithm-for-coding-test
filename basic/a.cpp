#include <bits/stdc++.h>
using namespace std;

int ary[3];
int a, b, c;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 3; i++){
		cin >> ary[i];
	}
	sort(ary, ary + 3);
	a = ary[0]; b = ary[1]; c = ary[2];
	if(a == b && b == c) cout << 10000 + a * 1000 << '\n';
	else if(a == b || a == c) cout << 1000 + a * 100 << '\n';
	else if(b == c) cout << 1000 + b * 100 << '\n';
	else cout << c * 100 << '\n';

	return 0;
}
