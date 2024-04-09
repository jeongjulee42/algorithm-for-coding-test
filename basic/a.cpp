#include <bits/stdc++.h>
using namespace std;

int n, k, m, v, c;
long long ret;
bool visited[300000];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	vector<pair<int, int>> adj;
	vector<int> carry;
	for(int i = 0; i < n; i++){
		cin >> m >> v;
		adj.push_back({m, v});
	}
	sort(adj.begin(), adj.end());
	for(int i = 0; i < k; i++){
		cin >> c;
		carry.push_back(c);
	}
	sort(carry.begin(), carry.end());
	priority_queue<int> pq;
	int j = 0;
	for(int i = 0; i < k; i++){
		while(j < n && adj[j].first <= carry[i]) pq.push(adj[j++].second);
		if(pq.size()){
			ret += pq.top(); pq.pop();
		}
	}

	cout << ret << '\n';
	return 0;
}

