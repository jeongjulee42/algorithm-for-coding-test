#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){ 
    vector<int> v = {1, 2, 3, 4, 5, 6}; 
    rotate(v.begin() + 1, v.begin() + 2, v.begin() + 5); 
    for(int i : v) cout << i << ' ';
    return 0;
}