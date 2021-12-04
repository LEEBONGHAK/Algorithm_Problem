#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cin >> str1 >> str2;
    swap(str1[0], str1[2]);
    swap(str2[0], str2[2]);

    if (stoi(str1) > stoi(str2)) {
        cout << stoi(str1) << endl;
    }
    else {
        cout << stoi(str2) << endl;
    }

    return 0;
}