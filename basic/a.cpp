#include <bits/stdc++.h>
using namespace std;

string str, fire;
string ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> str;
	cin >> fire;
	for(int i = 0; i < str.size(); i++){
		ret += str[i];
		if(ret.size() >= fire.size() && ret.substr(ret.size() - fire.size()) == fire){
			ret.erase(ret.size() - fire.size());
		}
	}
	if(ret.size() == 0) cout << "FRULA" << '\n';
	else cout << ret << '\n';
	
	return 0;
}

