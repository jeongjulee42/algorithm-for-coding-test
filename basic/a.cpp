#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<string, int> mp;
int n, ret;
string name;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> name;
		if(name == "ENTER"){
			ret += mp.size();
			mp.clear();
		}else{
			if(mp.find(name) == mp.end()){
				mp.insert({name, 1});
			}
		}
	}
	ret += mp.size();
	cout << ret << '\n';
	return 0;
}