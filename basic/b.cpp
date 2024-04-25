#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ary[1000004];
ll s, c, ret = 0;
bool check(int mid){
	cout << mid << '\n';
	int num = 0;
	for(int i = 0; i < s; i++){
		if(ary[i] / mid == 0) return false;
		num += ary[i] / mid;
	}
	return num >= c;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> s >> c;
	ll sum = 0;
	ll hi = 0, mid = 0, lo = 1;
	for(int i = 0; i < s; i++) cin >> ary[i], sum+= ary[i], hi = max(hi, ary[i]);
	while(lo <= hi){
		mid = (lo + hi) / 2;
		if(check(mid)){
			lo = mid + 1;
			ret = max(ret, mid);
		}else{
			hi = mid - 1;
		}
	}
	cout << sum - (c * ret) << '\n';
	return 0;
}