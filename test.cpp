#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, t;
int ix = 1;
bool flag;
stack<int> s;
queue<int> q;
queue<char> result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        q.push(t);
    }

    while (!q.empty())
    {
        if (!s.empty() && s.top() == q.front())
        {
            result.push('-');
            s.pop();
            q.pop();
            continue;
        }

        s.push(ix);
        result.push('+');
        ix++;

        if (ix > n + 1) 
        {
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        while (!result.empty())
        {
            cout << result.front() << endl;
            result.pop();
        }
    }
    else cout << "NO" << endl;

    return 0;
}