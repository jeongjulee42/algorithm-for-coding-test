#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, temp, ret;
int ary[10];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> ary[i];
	}
	temp = n - 1;
	for(int i = 0; i < n; i++){
		if(ary[i] > k){
			temp = i - 1;
			break;
		} else if(ary[i] == k) temp = i;
	}
	while(temp >= 0){
		ret += (k / ary[temp]);
		k %= ary[temp];
		temp--;
	}
	cout << ret << '\n';
	return 0;
}