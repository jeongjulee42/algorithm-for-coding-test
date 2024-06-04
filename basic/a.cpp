#include<bits/stdc++.h>
using namespace std;

int x, y, w, h;
int ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> x >> y >> w >> h;
	ret = min(min(x, w - x), min(y, h - y));
	cout << ret << '\n';
	return 0;
}







