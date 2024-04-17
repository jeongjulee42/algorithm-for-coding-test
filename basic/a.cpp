#include <bits/stdc++.h>
using namespace std;

int n, l, cnt, s, e, length;
vector<pair<int, int>> water;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> l;
	for(int i = 0; i < n; i++){
		cin >> s >> e;
		water.push_back({s, e});
	}
	sort(water.begin(), water.end());
	for(auto w : water){
		if(length < w.first){
			cnt++;
			length = w.first + l;
		}
		while(length < w.second){
			length += l;
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}

