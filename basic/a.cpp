#include <bits/stdc++.h>
using namespace std;

int n, mp, mf, ms, mv, idx;
int minVal = 987654321;
struct Food{int p; int f; int s; int v; int c;};
Food ary[15];
vector<int> ret;

bool cmp(vector<int> a, vector<int> b){
	int minVal = min(a.size(), b.size());
	int cnt = 0;
	for(int i = 0; i < minVal; i++){
		if(a[i] < b[i]) return true;
		else if(a[i] == b[i]) cnt++;
		else return false;
	}
	if(cnt == minVal && a.size() > b.size()) return false;
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	cin >> mp >> mf >> ms >> mv;
	for(int i = 0; i < n; i++){
		int p, f, s, v, c;
		cin >> p >> f >> s >> v >> c;
		ary[i] = {p, f, s, v, c};
	}
	for(int i = 0; i < (1 << n); i++){
		int p = 0, f = 0, s = 0, v = 0, c = 0;
		vector<int> temp;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				p += ary[j].p; f += ary[j].f; s += ary[j].s; v += ary[j].v; c += ary[j].c;
				temp.push_back(j + 1);
			}
		}
		if(p >= mp && f >= mf && s >= ms && v >= mv && minVal >= c){
			if(minVal > c){
				minVal = c;
				ret.clear();
				for(int z : temp) ret.push_back(z);
			}
			else{
				sort(temp.begin(), temp.end());
				if(ret.size() == 0) {
					for(int z : temp) ret.push_back(z);
				}
				else if(cmp(temp, ret)){
					ret.clear();
					for(int z : temp) ret.push_back(z);
				}
			}
		}
	}
	if(minVal == 987654321) cout << -1;
	else {
		cout << minVal << '\n' ;
		for(int z : ret) cout << z << " ";
	}
	return 0;
}

