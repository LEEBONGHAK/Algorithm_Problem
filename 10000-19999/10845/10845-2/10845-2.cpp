#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;	// int형 자료를 담는 queue 생성

	string command;
	int N, X;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "push") {
			cin >> X;
			q.push(X);
		}
		else if (command == "pop") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (command == "size") {
			cout << q.size() << endl;
		}
		else if (command == "empty") {
			cout << q.empty() << endl;
		}
		else if (command == "front") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
			}
		}
		else if (command == "back") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.back() << endl;
			}
		}
	}

	return 0;
}