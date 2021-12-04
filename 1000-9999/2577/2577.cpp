#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    string temp;
    string numbers = "0123456789";
    int n_num[10] = { 0, };

    cin >> a;
    cin >> b;
    cin >> c;

    temp = to_string(a * b * c);

    for (int i = 0; i < temp.length(); i++) {
        n_num[numbers.find(temp[i])]++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", n_num[i]);
    }

    return 0;
}