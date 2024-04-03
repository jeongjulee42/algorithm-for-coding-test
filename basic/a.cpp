#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int n, minVal = INF, sum;
vector<int> v[11];
int ary[11];
bool visited[11];
int cnt;

void go(int here, vector<int> a){
	visited[here] = 1;
	cnt ++;
	for(int there : v[here]){
		if(visited[there]) continue;
		if(find(a.begin(), a.end(), there) == a.end()) continue;
		go(there, a);
	}
}

bool check(vector<int> a, vector<int> b){
	memset(visited, 0, sizeof(visited));
	cnt = 0;
	go(a[0], a);
	if(cnt != a.size()) return false;
	memset(visited, 0, sizeof(visited));
	cnt = 0;
	go(b[0], b);
	if(cnt != b.size()) return false;
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> ary[i];
		sum += ary[i];
	}
	for(int i = 1; i <= n; i++){
		int idx = 0;
		cin >> idx;
		for(int j = 0; j < idx; j++){
			int temp = 0;
			cin >> temp;
			v[i].push_back(temp);
		}
	}
	for(int i = 1; i < (1 << n) - 1; i++){
		vector<int> red;
		vector<int> blue;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				red.push_back(j + 1);
			}
			else blue.push_back(j + 1);
		}
		if(check(red, blue)){
			int temp = 0;
			for(int r : red) temp += ary[r];
			minVal = min(minVal, abs(temp - (sum - temp)));
		}
	}
	if(minVal == INF) cout << -1 << '\n';
	else cout << minVal << '\n';
	return 0;
}

