#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n;
int i = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    if (n == 1) cout << 1 << endl;
    else if (n >= 2 && n <= 7) cout << 2 << endl;
    else
    {
        while(1)
        {
            if (n > (1 + 3 * i * (i + 1)) && n <= (1 + 3 * (i + 1) * (i + 2)))
            {
                cout << i + 2 << endl;
                break;
            }

            i++;
        }
    }

    return 0;
}