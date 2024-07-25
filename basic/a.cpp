#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 1; i < n; i++){
		int temp = 0;
		int num = i;
		while(num != 0){
			temp += num % 10;
			num /= 10;
		}
		temp += i;
		if(temp == n){
			cout << i << '\n';
			exit(0);
		}
	}
	cout << 0 << '\n';
	
	return 0;
}