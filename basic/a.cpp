#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ary[101][11], n, ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 1; i < 10; i++) ary[1][i] = 1;
    for(int i = 2; i <= n; i++){
        ary[i][0] = ary[i-1][1];
        for(int j = 1; j < 10; j++){
            ary[i][j] = (ary[i-1][j-1] + ary[i-1][j+1]) % 1000000000;
        }
    }

    for(int i = 0; i < 10; i++){
        ret = (ret + ary[n][i]) % 1000000000;
    }

    cout << ret << '\n';

	return 0;
}

