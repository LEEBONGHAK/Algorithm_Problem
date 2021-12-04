#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> dq;

    cin >> n;
    for (int i = 0; i < n; i++)
        dq.push_back(i + 1);

    while(dq.size() != 1)
    {
        dq.pop_front();
        temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
    }

    cout << dq.front() << endl;

    return 0;
}