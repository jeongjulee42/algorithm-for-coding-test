#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, ret;
int ary[101];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> ary[i];
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				int temp = ary[i] + ary[j] + ary[k];
				if(temp > m) continue;
				if(m - temp < m - ret){
					ret = temp;
				}
			}
		}
	}
	cout << ret << '\n';
	
	return 0;
}