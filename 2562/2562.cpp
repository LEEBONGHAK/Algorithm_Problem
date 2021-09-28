#include <iostream>

using namespace std;

int main() {
    int result = -1;
    int n, result_count;

    for (int i = 0; i < 9; i++) {
        cin >> n;
        if (n > result) {
            result = n;
            result_count = i;
        }
    }

    cout << result << endl;
    cout << result_count + 1 << endl;

    return 0;
}
