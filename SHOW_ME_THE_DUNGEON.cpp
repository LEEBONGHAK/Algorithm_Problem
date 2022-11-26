#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k, tmp1, tmp2;
int a[100000], p[100000];
vector<pair<int, int>> arr1;
vector<pair<int, int>> arr2;

bool cmp1(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

bool cmp2(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> p[i];

    for (int i = 0; i < n; i++)
    {
        arr1.push_back(make_pair(a[i], p[i]));
        arr2.push_back(make_pair(a[i], p[i]));
    }

    sort(arr1.begin(), arr1.end(), cmp1);
    sort(arr2.begin(), arr2.end(), cmp2);

    int k1 = k;
    for (int i = 0; i < n; i++)
    {
        k1 -= arr1[i].first;
        if (k1 < 0)
            break ;
        tmp1 += arr1[i].second;
    }

    k1 = k;
    for (int i = 0; i < n; i++)
    {
        k1 -= arr2[i].first;
        if (k1 < 0)
            break ;
        tmp2 += arr2[i].second;
    }

    cout << max(tmp1, tmp2) << endl;

    return 0;
}