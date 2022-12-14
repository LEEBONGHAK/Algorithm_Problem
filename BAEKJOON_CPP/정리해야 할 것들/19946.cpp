#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

unsigned long long N;
int i;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for (i = 0; i < 64; i++)
        if (N & (1ULL << i))
            break;

    cout << 64 - i << endl;


    return 0;
}