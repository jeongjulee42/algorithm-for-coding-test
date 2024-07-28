#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
map<string, bool> mp;
string a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		if(a == "ChongChong"){
			mp.insert({b, true});
		}else if (b == "ChongChong"){
			mp.insert({a, true});
		}else if(mp.find(a) != mp.end()){
			mp.insert({b, true});
		}else if(mp.find(b) != mp.end()){
			mp.insert({a, true});
		}
	}
	cout << mp.size() + 1 << '\n';
	return 0;
}