#include<bits/stdc++.h>
using namespace std;

int ary[26], ret, idx, cnt;
string str;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		char c = str[i];
		if((int)c >= 97) ary[c - 97]++;
		else ary[c - 65]++;
	}
	for(int i = 0; i < 26; i++){
		if(ret < ary[i]){
			ret = ary[i];
			idx = i;
			cnt = 1;
		}else if(ret == ary[i]){
			cnt++;
		}
	}
	if(cnt > 1) cout << '?' << '\n';
	else{
		cout << (char)(idx + 65) << '\n';
	}
	return 0;
}