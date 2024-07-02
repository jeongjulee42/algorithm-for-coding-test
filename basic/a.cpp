#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ary[1001];
int n, temp, ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	ary[1] = true;
	for(int i = 3; i <= 1000; i++){
		for(int j = 2; j < i; j++){
			if(i % j == 0){
				ary[i] = true;
				break;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(!ary[temp]) ret++;
	}
	cout << ret << '\n';
	return 0;
}