#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
set<string> st;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> s;
	for(int i = 0; i < s.size(); i++){
		string temp = "";
		for(int j = i; j < s.size(); j++){
			temp += s[j];
			cout << temp << '\n';
			st.insert(temp);
		}
	}
	cout << st.size() << '\n';

	return 0;
}