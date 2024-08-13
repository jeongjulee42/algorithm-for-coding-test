#include<bits/stdc++.h>
using namespace std;

int n, start, g, temp;

int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b % a, a);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(i == 0){ 
			start = temp;
		}else if(i == 0){
			g = temp - start;
		}
		else{
			g = gcd(g, temp - start);
		}
	}

	cout << (temp - start) / g - n + 1 << '\n';
	

	return 0;
}