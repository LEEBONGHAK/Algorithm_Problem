#include <iostream>

using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;

    if ((minute - 45) < 0) {
        hour -= 1;
        if (hour < 0) {
            hour = 23;
        }
        minute = 60 - (45 - minute);
        cout << hour << " " << minute << endl;
    }
    else {
        cout << hour << " " << minute - 45 << endl;
    }

    return 0;
}