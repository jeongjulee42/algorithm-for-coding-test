#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, t = 1;
int ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    while(t*t <= n){
        ret++;
        t++;
    }
    cout << ret << '\n';

	return 0;
}