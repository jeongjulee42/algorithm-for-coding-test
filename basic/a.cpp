#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;
int ret[1000001];
int n, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		v.push_back({temp, i});
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for(int i = 0; i < n; i++){
		ret[v[i].second] = cnt;
		if(i < n - 1 && v[i].first == v[i + 1].first) continue;
		cnt++;
	}
	for(int i = 0; i < n; i++) cout << ret[i] << ' ';
	cout << '\n';

	return 0;
}