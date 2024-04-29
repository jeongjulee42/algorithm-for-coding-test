#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

double ary[10004], ret;
int n;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++) cin >> ary[i], ret = max(ret, ary[i]);
	for(int i = 0; i < n; i++){
		if(ary[i] < 1) continue;
		double maxVal = 1;
		for(int j = 0; j <= i; j++){
			if(maxVal < 1)maxVal = 1;
			maxVal *= ary[j];
		}
		ret = max(ret, maxVal);
	}
	cout << fixed;
	cout.precision(3);
	cout << ret << '\n';

	return 0;
}