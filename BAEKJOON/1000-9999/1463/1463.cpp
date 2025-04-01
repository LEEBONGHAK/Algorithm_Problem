#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int arr[1000001];
int n;

void dp()
{
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + 1;

        if (i % 2 == 0)
            arr[i] = min(arr[i], arr[i / 2] + 1);
        if (i % 3 == 0)
            arr[i] = min(arr[i], arr[i / 3] + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    dp();
    cout << arr[n] << endl;

    return 0;
}

// 참고: https://blog.naver.com/PostView.nhn?blogId=occidere&logNo=220787315353