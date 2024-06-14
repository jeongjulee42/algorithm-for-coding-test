#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ret;
ll ary[104][24];
int num[104];
int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	ary[0][num[0]] = 1;
	for(int i = 1; i < n; i++){
		for(int j = 0; j <= 20; j++){
			if(ary[i - 1][j]){
				int a = j - num[i];
				int b = j + num[i];
				if(a >= 0 && a <= 20){
					ary[i][a] += ary[i - 1][j];
				}
				if(b >= 0 && b <= 20){
					ary[i][b] += ary[i - 1][j];
				}
			}
		}
	}
	cout << ary[n - 2][num[n - 1]];
	
	return 0;
}