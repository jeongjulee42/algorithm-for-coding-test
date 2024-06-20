#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, c, d, e, f;
vector<pair<int, int>> v;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c >> d >> e >> f;
	for(int i = -999; i < 1000; i++){
		for(int j = -999; j < 1000; j++){
			if(a * i + b * j == c){
				v.push_back({i, j});
			}
		}
	}
	for(auto t : v){
		if(d * t.first + e * t.second == f){
			cout << t.first << ' ' << t.second << '\n';
		}
	}

	return 0;
}