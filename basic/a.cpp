#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[1001], cnt[1001], cnt2[1001], ret;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < n; i++){
        int maxVal = 0;
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && maxVal < cnt[j]) maxVal = cnt[j];
        }
        cnt[i] = maxVal + 1;
    }
    for(int i = n-1; i >= 0; i--){
        int minVal = 0;
        for(int j = n - 1; j > i; j--){
            if(a[j] < a[i] && minVal < cnt2[j]) minVal = cnt2[j];
        }
        cnt2[i] = minVal + 1;
        ret = max(ret, cnt[i] + cnt2[i] - 1);
    }

    cout << ret << '\n';

	return 0;
}

