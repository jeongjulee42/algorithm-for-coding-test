#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int n, m, minVal = 987654321, ret;
bool che[10004];

void era(){
	for(int i = 2; i <= 10001; i++){
		if(che[i]) continue;
		for(int j = i * 2; j <= 10001; j += i){
			che[j] = 1;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n;
	era();
	che[1] = 1;
	for(int i = m; i <= n; i++){
		if(che[i] == 0){
			minVal = min(minVal, i);
			ret += i;
		}
	}
	if(ret == 0) cout << -1 << '\n';
	else cout << ret << '\n' << minVal << '\n';
	
	return 0;
}