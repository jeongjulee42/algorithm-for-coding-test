#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, num, minNum = 987654321, maxNum = -987654321, sum, mid, cnt;
vector<int> v;
map<int, int> mp;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        mp[num]++;
        minNum = min(minNum, num);
        maxNum = max(maxNum, num);
        sum += num;
    }
    cout << round(sum / n + 0.0) << '\n';
    
    bool flag = 0;
    for(auto m : mp){
        mid = max(mid, m.second);
        cnt += m.second;
        if(cnt >= n / 2 && !flag){
            flag = 1;
            cout << m.first << '\n';
        }
    }


    for(auto m : mp){
        if(m.second == mid) v.push_back(m.first);
    }
    if(v.size() >= 2) cout << v[1] << '\n';
    else cout << v[0] << '\n';

    cout << maxNum - minNum << '\n';

	return 0;
}

