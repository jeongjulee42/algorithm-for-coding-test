#include<bits/stdc++.h>
using namespace std;

int num;
string str[20004];

bool cmp(string a, string b){
	if(a.size() < b.size()) return true;
	else if(a.size() > b.size()) return false;
	else return a < b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> num;
	for(int i = 0; i < num; i++){
		cin >> str[i];
	}
	sort(str, str + num, cmp);
	cout << str[0] << '\n';

	for(int i = 1; i < num; i++) {
		if(str[i - 1] == str[i]) continue;
		cout << str[i] << '\n';
	}

	return 0;
}