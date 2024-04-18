#include <bits/stdc++.h>
using namespace std;

int n, minVal = 1000000004, maxVal = -1000000004;
int ary[11];
int cal[4];

int calc(int a, int b, int num){
	if(num == 0) return a + b;
	else if (num == 1) return a - b;
	else if (num == 2) return a * b;
	else return a / b;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++) cin >> ary[i];
	for(int i = 0; i < 4; i++) cin >> cal[i];
	vector<int> v;
	for(int i = 0; i < 4; i++){
		for(int j = cal[i]; j > 0; j--){
			v.push_back(i);
		}
	}
	sort(v.begin(), v.end());
	do{
		int ret = ary[0];
		for(int i = 1; i < n; i++){
			ret = calc(ret, ary[i], v[i - 1]);
		}
		minVal = min(minVal, ret);
		maxVal = max(maxVal, ret);
	}while(next_permutation(v.begin(), v.end()));

	cout << maxVal << '\n' << minVal << '\n';
	return 0;
}

