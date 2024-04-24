#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n, m;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> m;
		ll ret = 0;
		vector<int> a;
		vector<int> b;
		int temp = 0;
		for(int j = 0; j < n; j++){
			cin >> temp;
			a.push_back(temp);
		}
		for(int j = 0; j < m; j++){
			cin >> temp;
			b.push_back(temp);
		}
		sort(b.begin(), b.end());
		for(int j = 0; j < a.size(); j++){
			ret += lower_bound(b.begin(), b.end(), a[j]) - b.begin();
		}
		cout << ret << '\n';
	}

	return 0;
}