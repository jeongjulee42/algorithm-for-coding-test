#include <bits/stdc++.h>
using namespace std;




int main(){ 

    vector<int> a {1, 2, 3, 3, 3, 4};
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << '\n';

    return 0;
}