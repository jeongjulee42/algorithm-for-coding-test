#include<bits/stdc++.h>
using namespace std;

int n, m;
map<string, int> mp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		string str = "";
		cin >> str;
		mp.insert({str, 1});
	}
	int ret = 0;
	for(int i = 0; i < m; i++){
		string str = "";
		cin >> str;
		if(mp.find(str) != mp.end()) ret++;
	}	
	cout << ret << '\n';

	return 0;
}







