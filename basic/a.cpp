#include <bits/stdc++.h>
using namespace std;

string str;
int ary[26];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> str;
	memset(ary, -1, sizeof(ary));
	for(int i = 0; i < str.size(); i++){
		if(ary[str[i] - 'a'] == -1){
			ary[str[i] - 'a'] = i;
		}
	}
	for(int i = 0; i < 26; i++) cout << ary[i] << ' ';

	return 0;
}

