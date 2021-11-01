#include <bits/stdc++.h>

using namespace std;

int a[500001];

int lower(int l, int r, int target)
{
    while(l<r)
    {
        int mid = (l+r)/2;
        if(a[mid]<target) l = mid+1;
        else r = mid;
    }
    return l;
}

int upper(int l, int r, int target)
{
    while(l<r)
    {
        int mid = (l+r)/2;
        if(a[mid]<=target) l = mid+1;
        else r = mid;
    }
    return l;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int m;
    scanf(" %d", &m);
    for(int i=0;i<m;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        printf("%d ", upper(0, n, tmp)-lower(0, n, tmp));
    }

    return 0;
}