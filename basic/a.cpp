#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int p, q;
vector<int> v;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> p >> q;
	for(int i = 1; i <= p; i++){
		if(p % i == 0) v.push_back(i);
	}
	if(v.size() < q - 1) cout << '0' << '\n';
	else cout << v[q - 1] << '\n'; 

	return 0;
}