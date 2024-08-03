#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, l, k;
ll gcd(ll a, ll b){
	if(a == 0) return b;
	return gcd(b % a, a);
}
ll lcm(ll a, ll b){
	return (a * b) / gcd(a, b);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	cin >> l >> k;
	int tp = n * k + m * l;
	int bt = m * k;
	int div = gcd(tp, bt);
	cout << tp / div << ' ' << bt / div << '\n';

	return 0;
}