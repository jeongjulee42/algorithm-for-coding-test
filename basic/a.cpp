#include<bits/stdc++.h>
using namespace std;

bool che[1000001];
int t, n;

void go(){
    che[1] = 1;
    for(int i = 2; i <= 1000000; i++){
        if(che[i]) continue;
        for(int j = i * 2; j <= 1000000; j += i){
            che[j] = 1;
        }
    }
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    go();
    cin >> t;
    for(int z = 0; z < t; z++){
        cin >> n;
        int ret = 0;
        for(int i = 2; i <= n / 2; i++){
            if(che[i]) continue;
            if(che[i] == 0 && che[n - i] == 0) ret++;
        }
        cout << ret << '\n';
    }

	return 0;
}