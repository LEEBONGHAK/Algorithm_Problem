#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

// using counting sort (계수 정렬)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, k;
	int arr[10001] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> k;
		arr[k]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (arr[i] == 0) {
			continue;
		}

		for (int j = 0; j < arr[i]; j++) {
			cout << i << endl;
		}
	}

	return 0;
}