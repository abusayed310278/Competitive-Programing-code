#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;


inline void cp() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

class Solution {
public:

    bool isPalindrome(string &s, int i, int j) {

        while (i < j) {

            if (s[i] != s[j])return false;
            i++;
            j--;
        }
        return true;
    }

    int solve(int i, int n, string &s, vector<int>&dp) {

        if (i == n)return 0;
        if (dp[i] != -1)return dp[i];

        int mini = INT_MAX;
        for (int j = i; j < n; j++) {

            if (isPalindrome(s, i, j)) {

                int cost = 1 + solve(j + 1, n, s, dp);
                mini = min(mini, cost);
            }
        }

        return dp[i] = mini;
    }


    int minCut(string s) {
        int n = s.size();
        vector<int>dp(n, -1);
        return solve(0, n, s, dp);
    }
};




int main()
{

    cp();
    int t; cin >> t;

    while (t--) {

        int n; cin >> n;
        string s; cin >> s;

        Solution ob;
        cout << ob.minCut(s) << endl;
    }

    return 0;
}