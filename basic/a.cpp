#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ary[1000001], n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    ary[1] = 1;
    ary[2] = 2;
    for(int i = 3; i <= 1000000; i++){
        ary[i] = (ary[i-1] + ary[i-2]) % 15746;
    }
    cout << ary[n] % 15746 << '\n';

	return 0;
}

