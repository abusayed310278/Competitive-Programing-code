#include<bits/stdc++.h>
using namespace std;

int f(int n, int r = 0) {

    if (n == 0)return 0;

    int ans = 0;
    ans += r + f(n / 10, n % 10);

    return ans;
}

int main() {

    freopen("inputf.in", "r", stdin);
    // freopen("outputf.in", "w", stdout);

    int s; cin >> s;

    cout << f(s);

}