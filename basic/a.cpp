#include<bits/stdc++.h>
using namespace std;

char ary[5][16];
int v[5][16];
int m;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	for(int i = 0; i < 5; i++){
		string s;
		cin >> s;
		for(int j = 0; j < s.size(); j++){
			ary[i][j] = s[j];
			v[i][j] = 1;
		}
	}
	string ret = "";
	for(int i = 0; i < 16; i++){
		for(int j = 0; j < 5; j++){
			if(!v[j][i]) continue;
			ret += ary[j][i];
		}
	}
	cout << ret << '\n';

	return 0;
}







