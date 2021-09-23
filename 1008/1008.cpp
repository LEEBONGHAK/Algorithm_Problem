#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;

    cin >> x;
    cin >> y;
    cout << setprecision(12);
    cout << x / y << endl;

    return 0;
}
