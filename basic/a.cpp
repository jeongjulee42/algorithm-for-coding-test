#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;
int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp = 0;
		cin >> temp;
		mp.insert({temp, 1});
	}
	for(auto a : mp) cout << a.first << '\n';
	
	return 0;
}







