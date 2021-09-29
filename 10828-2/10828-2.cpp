#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string command;
	int N, X;
	stack<int> stk;

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> command;

		if (command == "push") {
			cin >> X;
			stk.push(X);
		}
		else if (command == "pop") {
			if (stk.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stk.top() << endl;
				stk.pop();
			}
		}
		else if (command == "size") {
			cout << stk.size() << endl;
		}
		else if (command == "empty") {
			cout << stk.empty() << endl;
		}
		else if (command == "top") {
			if (stk.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stk.top() << endl;
			}
		}
	}

	return 0;
}