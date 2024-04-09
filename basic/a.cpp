#include <bits/stdc++.h>
using namespace std;

int n;
double score;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	priority_queue<double> pq;
	for(int i = 0; i < n; i++){
		cin >> score;
		if(pq.size() == 7){
			pq.push(score); pq.pop();
		}else pq.push(score);
	}
	vector<double> temp;
	while(pq.size()){
		temp.push_back(pq.top());
		pq.pop();
	}
	sort(temp.begin(), temp.end());
	cout.precision(3);
	cout << fixed;
	for(double a : temp) cout << a << '\n';

	return 0;
}

