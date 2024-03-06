#include <bits/stdc++.h>
using namespace std;

string s, temp;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	temp = s;
	reverse(s.begin(), s.end());
	if(temp == s) cout << 1 << '\n';
	else cout << 0 << '\n';
	return 0;
}