#include <bits/stdc++.h>
using namespace std;

int ary[100];
int n, m, cnt;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ary[i];
	}
	cin >> m;
	for(int i = 0; i < n; i++){
		if(ary[i] == m) cnt++;
	}
	cout << cnt << '\n';

	return 0;
}
