#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int N, M;
int num[9];
bool check[9];

void printCase(int pos)
{
    if (pos == M)
    {
        for (int i = 0; i < M; i++)
            cout << num[i] << " ";

        cout << endl;
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (check[i] == false)
        {
            num[pos] = i;
            check[i] = true;
            printCase(pos + 1);
            check[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    printCase(0);

    return 0;
}