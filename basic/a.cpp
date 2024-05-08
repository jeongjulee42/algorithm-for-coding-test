#include<bits/stdc++.h>
using namespace std;

double p, m;
int c, n, money, price;
int ary[10004];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	while(1){
		cin >> n >> m;
		money = (int)(m * 100 + 0.5);
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			cin >> c >> p;
			price = (int)(p * 100 + 0.5);
			for(int j = price; j <= money; j++){
				ary[j] = max(ary[j], ary[j - price] + c);
			}
		}
		cout << ary[money] << '\n';
		memset(ary, 0, sizeof(ary));
	}
	
	return 0;
}