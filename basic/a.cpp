#include<bits/stdc++.h>
using namespace std;

int a1, a0, c, n0;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> a1 >> a0 >> c >> n0;
	for(int i = n0; i <= 100; i++){
		if((c - a1) * i < a0){
			cout << 0 << '\n';
			exit(0);
		}
	}
	cout << 1 << '\n';


	return 0;
}