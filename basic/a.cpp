#include <bits/stdc++.h>
using namespace std;

int n, from, to, ret;
vector<pair<int, int>> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> from >> to;
		v.push_back({from, to});
	}
	sort(v.begin(), v.end());
	ret = v[0].first + v[0].second;
	for(int i = 1; i < n; i++){
		if(v[i].first < ret){
			ret += v[i].second;
		}else{
			ret = v[i].first + v[i].second;
		}
	}
	cout << ret << '\n';
	return 0;
}

