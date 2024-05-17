#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;
int n, m, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		mp[temp] = 1;
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> temp;
		if(mp.find(temp) == mp.end()) cout << 0 << ' ';
		else cout << 1 << ' ';
	}

	return 0;
}







