#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, ary[1000001], sum[1000001], bry[1001], ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> ary[i];
        sum[i] = ((sum[i-1] + ary[i]) % m);
        bry[sum[i]]++;
    }
    for(int i = 1; i < m; i++){
        ret += ((bry[i] + 1) * bry[i] / 2 - bry[i]);
    }
    cout << (ret + (bry[0] + 1) * bry[0] / 2) << '\n';

	return 0;
}

