#include<bits/stdc++.h>
using namespace std;

int n, num;
string str;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> num >> str;
		for(int j = 0; j < str.size(); j++){
			for(int k = 0; k < num; k++) cout << str[j];
		}
		cout << '\n';
	}

	return 0;
}