#include <bits/stdc++.h>
using namespace std;

int n, d, p, ret;
priority_queue<int, vector<int>, greater<int>> pq;
vector<pair<int, int>> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	if(n == 0){
		cout << 0 << '\n';
		exit(0);
	}
	for(int i = 0; i < n; i++){
		cin >> p >> d;
		v.push_back({d, p});
	}
	sort(v.begin(), v.end());
	int day = v[0].first;
	pq.push(v[0].second);
	for(int i = 1; i < n; i++){
		if(day == v[i].first){
			if(pq.size() < day) pq.push(v[i].second);
			else{
				if(pq.top() < v[i].second){
					pq.push(v[i].second);
					pq.pop(); 
				}
			}
		}else {
			day = v[i].first;
			pq.push(v[i].second);
		}
	}
	while(pq.size()){
		ret += pq.top(); pq.pop();
	}
	cout << ret << '\n';
	return 0;
}

