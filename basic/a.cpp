#include <bits/stdc++.h>
using namespace std;

int n;
string f, res;
int a[26];

int main(){
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> f;
		a[f[0] - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(a[i] > 4) res += char(i + 97);
	}
	if(res == ""){
		cout << "PREDAJA" << '\n';
	}
	else cout << res << '\n';
	return 0;
}