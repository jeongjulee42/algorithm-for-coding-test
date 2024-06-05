#include<bits/stdc++.h>
using namespace std;

int x, y, w, h;
int ary[1004], bry[1004];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 3; i++){
		cin >> x >> y;
		ary[x]++;
		bry[y]++;
	}
	for(int i = 0; i < 1001; i++){
		if(ary[i] == 1) w = i;
		if(bry[i] == 1) h = i;
	}
	cout << w << ' ' << h << '\n';
	
	return 0;
}







