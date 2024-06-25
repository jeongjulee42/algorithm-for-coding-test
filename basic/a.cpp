#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string name, come;
int n;
map<string, int> mp;
vector<string> ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> name >> come;
		if(come == "enter") mp[name] = 1;
		else{
			mp.erase(name);
		}
	}
	for(auto m : mp){
		ret.push_back(m.first);
	}
	for(int i = ret.size() - 1; i >= 0; i--){
		cout << ret[i] << '\n';
	}

	return 0;
}