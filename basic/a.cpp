#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ary[101];
int t, n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> t;
    ary[1] = 1;
    ary[2] = 1;
    for(int i = 3; i <= 100; i++){
        ary[i] = ary[i - 3] + ary[i - 2];
    }
    for(int z = 0; z < t; z++){
        cin >> n;
        cout << ary[n] << '\n';
    }

	return 0;
}

