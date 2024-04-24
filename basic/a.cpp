#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll x, y, z, ret = 1000000004;
bool check(ll mid){
	ll _x = x + mid;
	ll _y = y + mid;
	ll res = ((double)_y * 100 / _x);
	return z != res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> x >> y;
	z = ((double)y * 100 / x);

	if(x == y) cout << -1 << '\n';
	else{
		ll lo = 1, hi = x, mid = 0;
		while(lo <= hi){
			mid = (lo + hi) / 2;
			if(check(mid)){
				ret = min(ret, mid);
				hi = mid - 1;
			}else{
				lo = mid + 1;
			}
		}
		if(ret == 1000000004) ret = -1;
		cout << ret << '\n';
	}

	return 0;
}