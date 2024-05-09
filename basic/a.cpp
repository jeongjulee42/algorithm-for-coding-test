#include<bits/stdc++.h>
using namespace std;

int ary[104];
pair<int, int> p[24];
int n, temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p[i].first;
	}
	for(int i = 0; i < n; i++){
		cin >> p[i].second;
	}
	for(int i = 0; i < n; i++){
		int h = p[i].first;
		int s = p[i].second;
		for(int j = 100; j >= h; j--){
			ary[j] = max(ary[j], ary[j - h] + s);
		}
	}
	cout << ary[99] << '\n';
	return 0;
}