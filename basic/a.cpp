#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int, int> mp;
int num, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> num;
	for(int i = 0; i < num; i++){
		cin >> temp;
		mp[temp]++;
	}
	for(auto m : mp){
		if(!m.second) continue;
		for(int i = 0; i < m.second; i++){
			cout << m.first << '\n';
		}
	}

	return 0;
}