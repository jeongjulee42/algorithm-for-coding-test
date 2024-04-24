#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Room{ll t; ll a; ll h;};
Room ary[123456];
ll atk, n, t, a, h, ret = 9e18;

bool check(ll hp, ll at){
	bool flag = true;
	ll maxHp = hp;
	for(int i = 0; i < n; i++){
		Room here = ary[i];
		if(here.t == 2){
			hp = min(maxHp, hp + here.h);
			at += here.a;
		}else{
			ll num = here.h / at;
			if(here.h % at) num++;
			cout << num << ":" << here.h << ":" << at << '\n';
			hp -= (here.a * (num - 1));
			if(hp <= 0){
				flag = false;
				break;
			}
		}
	}
	cout << maxHp << ":" << flag << '\n';
	return flag;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> atk;
	ll lo = 0, mid = 0, hi = 0;
	for(int i = 0; i < n; i++){
		cin >> t >> a >> h;
		ary[i] = {t, a, h};
		if(t == 1){
			hi += (h / atk + 1) * a;
		}
	}
	while(lo <= hi){
		mid = (lo + hi) / 2;
		if(check(mid, atk)){
			ret = min(ret, mid);
			hi = mid - 1;
		}else lo = mid + 1;
	}
	cout << ret << '\n';
	return 0;
}