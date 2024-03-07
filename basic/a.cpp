#include<bits/stdc++.h>
using namespace std;

int a[100005], psum[100005], n, k;
vector<int> res;

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    }
    for(int i = k - 1; i < n; i++){
        res.push_back(psum[i + 1] - psum[i - k + 1]);
    }
    cout << *max_element(res.begin(), res.end())<< '\n';

    return 0;
}