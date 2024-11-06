#include <bits/stdc++.h>
using namespace std;


int main() {

   cp();

 
      int a, b, c;

      cin >> a >> b >> c;

      int mx = max({a, b, c});
      int mn = min({a, b, c});

      int ans = (mx + mn + abs(mx - mn)) / 2;


      printf("%d eh o maior\n", ans );

   
   return 0;
}