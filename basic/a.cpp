#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
bool che[4000001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	if(n == 1) {
		cout << 0 << '\n';
		exit(0);
	}
	for(int i = 2; i <= n; i++){
		if(che[i]) continue;
		for(int j = 2 * i; j <= n; j += i){
			che[j] = 1;
		}
	}
	for(int i = 2; i <= n; i++) if(che[i] == 0) v.push_back(i);
	int r = 0, l = 0;
	int cnt = 0;
	int num = (v[r] + v[l]) / 2;
	while(r < v.size()){
		if(num < n){
			r++;
			num += v[r];
		}else if (num > n){
			num -= v[l];
			l++;
		}else if (num == n){
			cnt++;
			r++;
			num += v[r];
		}
	}
	cout << cnt << '\n';
	return 0;
}

