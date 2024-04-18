#include <bits/stdc++.h>
using namespace std;
int n, m, a, r, c, s, d, z, ret;
struct Shark{int r; int c; int s; int d; int z;};
vector<Shark> v;
int ary[100][100];
int dy[] = {0, -1, 1, 0, 0};
int dx[] = {0, 0, 0, 1, -1};
bool cmp(Shark p, Shark q){
	return p.z > q.z;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> a;
	for(int i = 0; i < a; i++){
		cin >> r >> c >> s >> d >> z;
		v.push_back({r - 1, c - 1, s, d, z});
	}
	sort(v.begin(), v.end(), cmp);
	for(auto vv : v) ary[vv.r][vv.c] = vv.z;
	for(int man = 0; man < m; man++){
		vector<Shark> temp;
		int rmv = 0;
		for(int i = 0; i < n; i++){
			if(ary[i][man]){
				rmv = ary[i][man];
				ret += rmv;
				break;
			}
		}
		memset(ary, 0, sizeof(ary));
		for(int k = 0; k < v.size(); k++){
			Shark sh = v[k];
			if(sh.z == rmv) continue;
			int ny = sh.r;
			int nx = sh.c;
			if(sh.d < 3){
				sh.s = sh.s % ((n - 1) * 2);
			}else{	
				sh.s = sh.s % ((m - 1) * 2);
			}
			for(int i = 0; i < sh.s; i++){
				ny = sh.r + dy[sh.d];
				nx = sh.c + dx[sh.d];
				if(ny < 0) {
					sh.d ++;
					ny = sh.r + dy[sh.d];
				}
				else if (ny >= n) {
					sh.d --;
					ny = sh.r + dy[sh.d];
				}
				else if (nx < 0) {
					sh.d --;
					nx = sh.c + dx[sh.d];
				}
				else if (nx >= m) {
					sh.d ++;
					nx = sh.c + dx[sh.d];
				}
				sh.r = ny; sh.c = nx;
			}
			if(ary[ny][nx]) continue;
			ary[ny][nx] = sh.z;
			temp.push_back(sh);
		}
		v = temp;
	}
	cout << ret << '\n';
	return 0;
}

