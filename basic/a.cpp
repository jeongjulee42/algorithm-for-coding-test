#include <bits/stdc++.h>
using namespace std;




int main(){ 
    vector<int> v = {1,2,3,4,5,6};
    rotate(v.begin(), v.begin() + 2, v.end());
    for(int a : v) cout << a << ' ';
    cout << '\n';
    return 0;
}