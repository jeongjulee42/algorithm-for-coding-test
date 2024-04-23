#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m, ret = 1e18;
ll ary[100004];
bool check(int mid){
	int num = 0;
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(sum + ary[i] > mid){
			sum = ary[i];
			num++;
		}else {
			sum += ary[i];
		}
	}
	return num < m;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	ll hi = 0, mid, lo = 0;
	for(int i = 0; i < n; i++) cin >> ary[i], hi += ary[i], lo = max(lo, ary[i]);
	while(lo <= hi){
		mid = (lo + hi) / 2;
		if(check(mid)){
			ret = min(ret, mid);
			hi = mid - 1;
		}else{
			lo = mid + 1;
		}
	}
	cout << ret << '\n';
	return 0;
}