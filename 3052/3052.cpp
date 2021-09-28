#include <iostream>

using namespace std;

int main()
{
	int input, result = 0;
	int arr[42] = { 0, };

	for (int i = 0; i < 10; i++) {
		cin >> input;

		arr[input % 42]++;
		if (arr[input % 42] == 1) {
			result++;
		}
	}

	cout << result << endl;

	return 0;
}