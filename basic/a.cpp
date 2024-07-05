#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> ret;
int n, sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	while(1){
		cin >> n;
		if(n == -1) break;
		ret.clear();
		sum = 0;
		for(int i = 1; i < n; i++){
			if(n % i == 0) ret.push_back(i);
		}
		for(int r : ret) sum += r;
		if(sum == n){
			cout << n << " = ";
			for(int i = 0; i < ret.size() - 1; i++){
				cout << ret[i] << " + ";
			}
			cout << ret[ret.size() - 1] << '\n';

		} else {
			cout << n << " is NOT perfect." << '\n';
		}
	}

	return 0;
}