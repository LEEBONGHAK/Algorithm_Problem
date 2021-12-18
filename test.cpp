#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

set<int> arr;
int n, m, t;

void printCase(vector<int> &ans) 
{
    if (int(ans.size()) == m) 
    {
        for (int v : ans) 
            cout << v << " ";
        cout << endl;

        return;
    }

    for (int v : arr) 
    {
        ans.push_back(v);
        printCase(ans);
        ans.pop_back();
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr.insert(t);
    }

    vector<int> ans;
    printCase(ans);

    return 0;
}