#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXVAL = 987654321;

ll n, s, sum, ret = MAXVAL, l, r = 1;
ll ary[100001];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> s;
	for(int i = 0; i < n; i++) {
		cin >> ary[i];
		if(ary[i] >= s) ret = 1;
	}
	sum = ary[0] + ary[1];
	while(r != n){
		if(sum >= s){
			ret = min(ret, r - l + 1);
			sum -= ary[l];
			l++;
		} else{
			r++;
			sum += ary[r];
		}
	}
	if(ret == MAXVAL) cout << 0 << '\n';
	else cout << ret << '\n';

	return 0;
}