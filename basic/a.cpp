#include<bits/stdc++.h>
using namespace std;

int n, ret = 1;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = n; i >= 2; i--){
		ret *= i;
	}
	cout << ret << '\n';
	return 0;
}







