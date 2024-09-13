#include<bits/stdc++.h>
using namespace std;

int n, start = 1, tot;
bool flag;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    while(tot + start < n){
        tot += start;
        start++;
        flag = !flag;
    }
    cout << start ;


	return 0;
}

