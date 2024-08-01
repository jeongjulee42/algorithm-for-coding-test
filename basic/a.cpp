#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//소수는 false 소수아니면 true
bool ary[1000001];
void che(){
	for(int i = 2; i < 1000001; i++){
		if(ary[i]) continue;
		for(int j = 2*i; j < 1000001; j = j + i){
			ary[j] = true;
		}
	}
}
int a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	che();
	ary[1] = true;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(!ary[i]) cout << i << '\n';
	}

	return 0;
}