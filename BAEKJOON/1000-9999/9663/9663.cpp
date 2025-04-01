#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int arr[15];
int n;
bool flag;

int n_queen(int pos)
{
    int cnt = 0;

    if (pos == n)
        return 1;
    
    for (int i = 0; i < n; i++)
    {
        if (!pos)
        {
            arr[pos] = i;
            cnt += n_queen(pos + 1);
            continue;
        }

        flag = true;
        for (int j = 0; j < pos; j++)
        {
            if (arr[j] == i || arr[j] - (pos - j) == i || arr[j] + (pos - j) == i)
                flag = false;
        }

        if (flag)
        {
            arr[pos] = i;
            cnt += n_queen(pos + 1);
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cout << n_queen(0) << endl;

    return 0;
}