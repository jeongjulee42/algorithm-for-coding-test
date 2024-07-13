#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int go(int n){
	if(n <= 2) return 1;
	return go(n - 1) + go(n - 2);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	if(n == 0 || n == 1) cout << n << '\n';
	else{
		cout << go(n) << '\n';
	}

	return 0;
}