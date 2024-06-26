#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int, int> mp;
int n, m, num;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> num;
		if(mp.find(num) == mp.end()){
			mp.insert({num, 1});
		}
		else{
			mp[num]++;
		}
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> num;
		if(mp.find(num) == mp.end()){
			cout << 0 << ' ';
		}
		else{
			cout << mp[num] << ' ';
		}
	}

	return 0;
}