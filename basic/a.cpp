#include<bits/stdc++.h>
using namespace std;

int a, b, v, ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> a >> b >> v;
    ret = (v-a) / (a - b);
    int t = (v-a) % (a - b);
    if(t == 0) cout << ret + 1 << '\n';
    else cout << ret + 2 << '\n';


	return 0;
}