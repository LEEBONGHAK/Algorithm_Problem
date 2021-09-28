#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    getline(cin, str);
    if (str == "1 2 3 4 5 6 7 8") {
        cout << "ascending\n";
    }
    else if (str == "8 7 6 5 4 3 2 1") {
        cout << "descending\n";
    }
    else {
        cout << "mixed\n";
    }

    return 0;
}