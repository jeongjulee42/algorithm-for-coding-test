#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ret = -1;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	int temp = n / 5;
	for(int i = temp; i >= 0; i--){
		if((n - (i * 5)) % 3 == 0){
			ret = i + ((n - (i * 5)) / 3);
			break;
		}
	}
	cout << ret << '\n';

	return 0;
}