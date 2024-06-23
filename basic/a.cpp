#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[] = {25, 10, 5, 1};
int t, c;
int ret[4];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	for(int i = 0; i < t; i++){
		fill(ret, ret + 4, 0);
		cin >> c;
		int j = 0;
		while(j < 4){
			ret[j] = c / ary[j];
			c = c % ary[j];
			j++;
		}
		for(int k = 0; k < 4; k++){
			cout << ret[k] << ' ';
		}
		cout << '\n';
	}

	return 0;
}