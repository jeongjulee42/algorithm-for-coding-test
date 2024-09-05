#include<bits/stdc++.h>
using namespace std;

int x1, x2, x3, p1, p2, p3;

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
    int temp = x1*y2+x2*y3+x3*y1;
    temp = temp - y1*x2-y2*x3-y3*x1;
    if (temp > 0) {
        return 1;
    } else if (temp < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> x1 >> p1 >> x2 >> p2 >> x3 >> p3;
	int ret = ccw(x1, p1, x2, p2, x3, p3);
	if(ret == 0) cout << 0;
	else if(ret > 0) cout << 1;
	else cout << -1;

	return 0;
}