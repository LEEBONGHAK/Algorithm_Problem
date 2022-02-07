#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, k, res, tmp;

void find_res(int pos)
{
    if (pos == 10)
        return ;

    for (int i = 1; i < 4; i++)
    {
        tmp += i;
        if (tmp == k)
            res++;
        find_res(pos + 1);
        tmp -= i;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        res = 0;
        tmp = 0;
        find_res(0);
        cout << res << endl;
    }

    return 0;
}