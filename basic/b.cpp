#include <bits/stdc++.h>
using namespace std;
//인접 조건 다시보기
int n, m, t, x, d, k, temp;
vector<vector<pair<int, int>>> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> t;
	vector<pair<int, int>> dummy;
	v.push_back(dummy);
	for(int i = 1; i <= n; i++){
		vector<pair<int, int>> _v;
		for(int j = 0; j < m; j++){
			cin >> temp;
			_v.push_back({temp, 0});
		}
		v.push_back(_v);
	}
	for(int i = 0; i < t; i ++){
		cin >> x >> d >> k;
		cout << "====before=====" << '\n';
		for(int j = 1; j <= n; j++){
			for(int l = 0; l < m; l++){
				if(v[j][l].second) cout << ' ' << ' ';
				else cout << v[j][l].first << ' ';
			}
			cout << '\n';
		}
		for(int j = x; j <= n; j += x){
			if(d == 1){
				rotate(v[j].begin(), v[j].begin() + k, v[j].end());
			}else{
				rotate(v[j].rbegin(), v[j].rbegin() + k, v[j].rend());
			}
		}
		cout << "====rotate=====" << '\n';
		for(int j = 1; j <= n; j++){
			for(int l = 0; l < m; l++){
				if(v[j][l].second) cout << ' ' << ' ';
				else cout << v[j][l].first << ' ';
			}
			cout << '\n';
		}
		int cnt = 0;
		int cnt2 = 0;
		int sum = 0;
		for(int j = 0; j < m; j++){
			int _te = 1005;
			for(int l = 1; l <= n; l++){
				if(v[l][j].second == 1) continue;
				sum += v[l][j].first;
				cnt++;
				if(_te == v[l][j].first){
					v[l - 1][j].second = 1;
					v[l][j].second = 1;
					cnt2++;
				}else{
					_te = v[l][j].first;
				}
			}
		}
		
		cout << "====remove=====" << '\n';
		for(int j = 1; j <= n; j++){
			for(int l = 0; l < m; l++){
				if(v[j][l].second) cout << ' ' << ' ';
				else cout << v[j][l].first << ' ';
			}
			cout << '\n';
		}
		if(!cnt2){
			sum /= cnt;
			for(int j = 1; j <= n; j++){
				for(int l = 0; l < m; l++){
					if(v[j][l].first > sum) v[j][l].first --;
					else if(v[j][l].first < sum) v[j][l].first ++;
				}
			}
		}
		cout << "====" << sum << "=====" << '\n';
		for(int j = 1; j <= n; j++){
			for(int l = 0; l < m; l++){
				if(v[j][l].second) cout << ' ' << ' ';
				else cout << v[j][l].first << ' ';
			}
			cout << '\n';
		}
	}
	int ret = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < m; j++){
			if(v[i][j].second == 1) continue;
			ret += v[i][j].first;
		}
	}
	cout << ret << '\n';
	return 0;
}

