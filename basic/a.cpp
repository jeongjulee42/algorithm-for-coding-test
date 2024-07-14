#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b % a, a);
}
int lcm(int a, int b){
	return (a * b) / gcd(a, b);
}
int a, b, n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		cout << lcm(min(a, b), max(a, b)) << '\n';
	}

	return 0;
}