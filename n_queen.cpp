#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

void show(int n, vector<int>&board[]) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int calplace(int q, int i, int n, vector<int>&board[]) {

	if()

	return true;
}

void f(int q, int n, vector<int>&board[]) {


	for (int i = 0; i < n; i++) {

		if (canplace(q, i, n, board)) {
			board[i][q] = 1;
			if (q == n)show();
		} else {
			f(q + 1, n, board);
		}
	}
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>board[n];
		int q = 0;
		f(q, n, board);
	}


	return 0;
}