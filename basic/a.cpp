#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string str;
int n, m;
vector<pair<string, int>> v;
map<string, int> mp;
bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.second > b.second){
		return true;
	}else if(a.second < b.second){
		return false;
	}else{
		if(a.first.size() > b.first.size()) return true;
		else if(a.first.size() < b.first.size()) return false;
		else{
			return a.first < b.first;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> str;
		if(str.size() < m) continue;
		mp[str] ++;
	}
	for(auto a : mp) v.push_back({a.first, a.second});
	sort(v.begin(), v.end(), cmp);
	for(auto a : v) cout << a.first << '\n';
	return 0;
}