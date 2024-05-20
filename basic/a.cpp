#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		int temp = 0;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), greater<int>());
	cout << v[m - 1] << '\n';	
	return 0;
}







