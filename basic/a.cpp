#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> ret;
int n;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	int i = 2;
	while(n != 1){
		if(n % i == 0){
			n /= i;
			ret.push_back(i);
		} else i++;
	}
	for(int r : ret) cout << r << '\n';
	return 0;
}