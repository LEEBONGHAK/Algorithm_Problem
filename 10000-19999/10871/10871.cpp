#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	// 동기화 해제
	cin.tie(NULL);	// 묶음 해제

	int N, X, c;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> c;
		if (c < X) {
			cout << c << " ";
		}
	}
	cout << endl;

	return 0;
}