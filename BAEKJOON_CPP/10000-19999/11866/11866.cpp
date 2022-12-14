#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, k;

	cin >> N >> k;
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";
	while (1) {
		for (int i = 0; i < k - 1; i++) {
			// queue의 첫 번째 요소를 넣고 지워 queue를 순환 가능
			q.push(q.front());
			q.pop();
		}

		cout << q.front();
		q.pop();
		if (q.empty()) break;
		cout << ", ";
	}
	cout << ">" << endl;

	return 0;
}