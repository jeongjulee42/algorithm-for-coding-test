#include <bits/stdc++.h>
using namespace std;

int n, d, c, ret;
priority_queue<int,vector<int>, greater<int>> pq;
vector<pair<int, int>> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> d >> c;
		v.push_back({d, c});
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++){
		pq.push(v[i].second);
		if(pq.size() > v[i].first){
			pq.pop();
		}
	}
	while(pq.size()){
		ret += pq.top(); pq.pop();
	}
	cout << ret << '\n';
	return 0;
}

