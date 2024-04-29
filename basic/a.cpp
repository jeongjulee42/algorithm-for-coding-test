#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<int, int> p[104];
int lis[104];
vector<int> temp;
int n, ret, a, b, len;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		p[i] = {a, b};
		temp.push_back(b);
	}
	sort(temp.begin(), temp.end());
	for(int i = 0; i < n; i++){
		for(int j = 0; j < temp.size(); j++){
			if(p[i].second == temp[j]){
				p[i].second = j;
			}
		}
	}
	sort(p, p + n);
	for(int i = 0; i < n; i++){
		int num = p[i].second;
		auto lp = lower_bound(lis, lis + len, num);
		if(*lp == 0) len++;
		*lp = num;
	}
	cout << n - len << '\n';

	return 0;
}