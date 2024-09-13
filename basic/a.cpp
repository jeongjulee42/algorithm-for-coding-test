#include<bits/stdc++.h>
using namespace std;

int n, start = 1, tot, a, b;
bool flag;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    while(tot + start < n){
        tot += start;
        start++;
        flag = !flag;
    }
    if(flag){
        a = n - tot;
        b = start + 1 - a;
    }else {
        a = start + 1 - (n - tot);
        b = n - tot;
    }
    cout << a << "/" << b;

	return 0;
}

