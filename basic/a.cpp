#include <bits/stdc++.h>
using namespace std;

int n;
string f, res;
map<char, int> mp;

int main(){
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> f;
		if(mp.find(f[0]) == mp.end()) mp.insert({f[0], 1});
		else mp[f[0]]++;
	}

	for(auto it : mp) {
		if(it.second > 4){
			res += it.first;
		}
	}
	if(res == "") cout << "PREDAJA" << '\n';
	else cout << res << '\n';

	return 0;
}