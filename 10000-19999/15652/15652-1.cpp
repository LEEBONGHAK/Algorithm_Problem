#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m;
int numbers[9];
bool check[9];

void printCase(int pos) 
{
    if (pos == m) 
    {
        for (int i = 0; i < m; i++) 
            cout << numbers[i] << " ";

        cout << endl;
        return;
    }


    for (int i = 1; i <= n; i++) 
    {
        if (check[i] == false)
        {
            for (int j = 1; j < i; j++)
                check[j] = true;

            numbers[pos] = i;
            printCase(pos + 1);

            for (int j = 1; j < i; j++)
                check[j] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    printCase(0);

    return 0;
}