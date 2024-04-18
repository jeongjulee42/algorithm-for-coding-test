#include <bits/stdc++.h>
using namespace std;

int t, m, n, a, b;
int ary[1000001];
int bry[1000001];
vector<int> ap;
vector<int> bp;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		cin >> a;
		ap.push_back(a);
	}
	for(int i = 0; i < n; i++){
		cin >> b;
		bp.push_back(b);
	}
	for(int i = 0; i < m - 2; i++) ap.push_back(ap[i]);
	for(int i = 0; i < n - 2; i++) bp.push_back(bp[i]);
	int asum = 0; int bsum = 0;
	for(int i = 0; i < m; i++){
		int sum = 0;
		for(int j = i; j < i + m - 1; j++){
			sum += ap[j];
			if(sum > t) break;
			ary[sum] ++;
		}
		asum += ap[i];
	}
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = i; j < i + n - 1; j++){
			sum += bp[j];
			if(sum > t) break;
			bry[sum] ++;
		}
		bsum += bp[i];
	}
	ary[asum] ++; bry[bsum] ++;
	int ret = 0;
	for(int i = 0; i <= t; i++){
		ret += (ary[i] * bry[t - i]);
	}
	ret += (ary[t] + bry[t]);
	for(int i = 0; i < 10; i++) cout << ary[i] << " ";
	cout << '\n';
	for(int i = 0; i < 10; i++) cout << bry[i] << " ";
	cout << '\n';
	cout << ret << '\n';
	return 0;
}

