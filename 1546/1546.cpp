#include <iostream>
#include <iomanip>	// setprecision()

using namespace std;

int main()
{
	int N;
	double max = 0;
	double arr[1000] = { 0, };
	double sum = 0.0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < N; i++) {
		sum += arr[i] / max * 100;
	}

	cout << setprecision(9);
	cout << sum / N << endl;

	return 0;
}