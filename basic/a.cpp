#include<bits/stdc++.h>
using namespace std;


string str;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	getline(cin, str);
	int cnt = 1;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == ' ') {
			if( i == 0 || i == str.size() - 1) continue;
			else cnt++;
		}
	}
	if(str == " ") cout << 0 << '\n';
	else cout << cnt << '\n';
	return 0;
}