#include <iostream>

using namespace std;

int main() {
    int n, result, score;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {
        result = 0;
        score = 0;

        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == 'X') {
                score = 0;
            }
            else if ((j >= 1) && (str[j] == 'O') && (str[j] == str[j - 1])) {
                score++;
            }
            else {
                score = 1;
            }
            result += score;
        }
        cout << result << endl;
    }

    return 0;
}