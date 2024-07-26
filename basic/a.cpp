#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
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
	cout << lcm(n, m) << '\n';

	return 0;
}