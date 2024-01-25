#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define loop(x,n) for(int x = 0; x < n; x++)
typedef int i;
int main() {
    cout << PI << '\n';
    int sum = 0;
    loop(i,10){
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}