#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back
#define r1size 4
#define r2size 4
#define c1size 4
#define c2size 4


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


//from gfg matrix multiplication

const int mod = 1e9 + 7;

void print(vvi &m, int rs, int re, int cs, int ce) {

	for (int i = rs; i <= re; i++) {
		for (int j = cs; j <= ce; j++) {
			cout << setw(10);
			cout << m[i][j];
		}
		cout << endl;
	}
	cout << endl;

}


void add(vvi A, vvi B, vvi C, int split_index) {

	for (int i = 0; i < split_index; i++) {
		for (int j = 0; j < split_index; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

}


vvi multiply_matrix(vvi A, vvi B) {

	int r1 = A.size(), c1 = A[0].size();
	int r2 = B.size(), c2 = B[0].size();

	if (c1 != r2) {
		return {};
	}

	vi ans_vector(c2, 0);
	vvi ans(r1, ans_vector);


	if (c1 == 1) {
		ans[0][0] = A[0][0] * B[0][0];
	} else {

		int split_index = c1 / 2;

		vi row_vector(split_index, 0);
		vvi ans00(split_index, row_vector);
		vvi ans01(split_index, row_vector);
		vvi ans10(split_index, row_vector);
		vvi ans11(split_index, row_vector);

		vvi a00(split_index, row_vector);
		vvi a01(split_index, row_vector);
		vvi a10(split_index, row_vector);
		vvi a11(split_index, row_vector);

		vvi b00(split_index, row_vector);
		vvi b01(split_index, row_vector);
		vvi b10(split_index, row_vector);
		vvi b11(split_index, row_vector);


		for (int i = 0; i < split_index; i++) {
			for (int j = 0; j < split_index; j++) {


				a00[i][j] = A[i][j];
				a01[i][j] = A[i][j + split_index];
				a10[i][j] = A[i + split_index][j];
				a11[i][j] = A[i + split_index][j + split_index];


				b00[i][j] = B[i][j];
				b01[i][j] = B[i][j + split_index];
				b10[i][j] = B[i + split_index][j];
				b11[i][j] = B[i + split_index][j + split_index];


			}


			add(multiply_matrix(a00, b00), multiply_matrix(a01, b10), ans00, split_index);
			add(multiply_matrix(a00, b01), multiply_matrix(a01, b11), ans01, split_index);
			add(multiply_matrix(a10, b00), multiply_matrix(a11, b10), ans10, split_index);
			add(multiply_matrix(a10, b01), multiply_matrix(a11, b11), ans11, split_index);


			for (int i = 0; i < split_index; i++) {
				for (int j = 0; j < split_index; j++) {

					ans[i][j] = ans00[i][j];
					ans[i][j + split_index] = ans01[i][j];
					ans[i + split_index][j] = ans10[i][j];
					ans[i + split_index][j + split_index] = ans11[i][j];

				}

				ans00.clear();
				ans01.clear();
				ans10.clear();
				ans11.clear();

				a00.clear();
				a01.clear();
				a10.clear();
				a11.clear();

				b00.clear();
				b01.clear();
				b10.clear();
				b11.clear();


			}


			return ans;
		}



	}



}


int main()
{

	cp();
	vvi A = { { 1, 1, 1, 1 }, { 2, 2, 2, 2 }, { 3, 3, 3, 3 }, { 2, 2, 2, 2 } };
	vvi B = { { 1, 1, 1, 1 }, { 2, 2, 2, 2 }, { 3, 3, 3, 3 }, { 2, 2, 2, 2 } };

	vvi ans = multiply_matrix(A, B);
	print(ans, 0, 0, r1size - 1, c2size - 1);



	return 0;
}