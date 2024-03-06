#include<bits/stdc++.h>
using namespace std;

int a[26];
string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		a[int(s[i]) - 97]++;
	}
	for(int i = 0; i < 26; i++)cout << a[i] << " ";

	return 0;
}