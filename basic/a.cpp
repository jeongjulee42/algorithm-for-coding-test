#include <bits/stdc++.h>
using namespace std;

int ary[10000];
int n, m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> ary[i];
	}
	for(int i = 0; i < n; i++){
		if(ary[i] < m) cout << ary[i] << " ";
	}
	cout << '\n';

	return 0;
}
