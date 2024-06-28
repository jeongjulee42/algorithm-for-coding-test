#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long n;

long long go(long long n){
	if(n <= 1) return 1;
	return go(n - 1) * n;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cout << go(n) << '\n';

	return 0;
}