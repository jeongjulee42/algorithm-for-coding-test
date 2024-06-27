#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
int n, m;
map<string, int> mp;
vector<string> ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> s;
		mp[s] = 0;
	}
	for(int i = 0; i < m; i++){
		cin >> s;
		if(mp.find(s) != mp.end()){
			mp[s]++;
		}
	}
	for(auto a : mp) if(a.second != 0) ret.push_back(a.first);
	cout << ret.size() << '\n';
	for(auto a : ret) cout << a << '\n';

	return 0;
}