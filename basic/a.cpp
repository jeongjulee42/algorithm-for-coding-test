#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, p[10004];
int ary[10004][3];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 1; i <= n; i++){
        ary[i][0] = max({ary[i-1][0], ary[i-1][1], ary[i-1][2]});
        ary[i][1] = ary[i-1][0] + p[i];
        ary[i][2] = max(ary[i-1][0], ary[i-1][1]) + p[i];
    }
    cout << max({ary[n][0], ary[n][1], ary[n][2]}) << '\n';

	return 0;
}

