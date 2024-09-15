#include<bits/stdc++.h>
using namespace std;

int n, b, m, c;
int ary[100004];
int bry[100004];
queue<int> q;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ary[i];
    }
    for(int i = 0; i < n; i++){
        cin >> bry[i];
    }
    for(int i = n-1; i >= 0; i--){
        if(ary[i] == 0) q.push(bry[i]);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> c;
        q.push(c);

        cout << q.front() << ' ';
        q.pop();
    }

	return 0;
}

