#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> str;
	if(str.size() < 2) cout << "NO" << '\n';
	else{
		for(int i = 1; i < str.size(); i++){
			if((str[i - 1] == 'p' && str[i] == 'i') || (str[i - 1] == 'k' && str[i] == 'a')){
				str[i - 1] = '.'; str[i] = '.';
			}
		}
		for(int i = 2; i < str.size(); i++){
			if(str[i - 2] == 'c' && str[i - 1] == 'h' && str[i] == 'u'){
				str[i-2] = '.'; str[i-1] = '.'; str[i] = '.';
			}
		}
		for(int i = 0; i < str.size(); i++){
			if(str[i] != '.') {
				cout << "NO" << '\n';
				exit(0);
			}
		}
		cout << "YES" << '\n';
	}
	
	return 0;
}

