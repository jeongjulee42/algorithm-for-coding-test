#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ary[100004];
ll len[100004];
ll n, lenSum, ret = 1e18, temp;

void go(int num, int money, int here){
    if(num == n - 1) ret = min(ret, money);
    for(int i = len[num]; i <= lensum; i++){
        //go(num + 1, money + ((i - here) * ary[num]), i);
        cout << num + 1 << ":" << money + ((i - here) * ary[num]) << ":" << i << '\n';
    }
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n - 1; i++){
        cin >> temp;
        lenSum += temp;
        if(i == 0) len[i] = temp;
        else{
            len[i] = len[i-1] + temp;
        }
    }
    for(int i = 0; i < n; i++) cin >> ary[i];

    go(0, 0, 0);

	return 0;
}
