#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int arr[500001];
int freq[8001];

// 산술평균 값
void mean(int arr[], int N)
{
    double sum = 0;
    
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    int res = round(sum / N);
    if (res == -0)
        cout << 0 << endl;
    else
        cout << round(sum / N) << endl;
}

// 중앙값
void median(int arr[], int N)
{
    cout << arr[N / 2] << endl;
}

// 최빈값
void mode(int arr[], int N)
{
    int max = 0;

    for(int i = 0; i < N; i++)
        freq[arr[i] + 4000]++;

    for (int i = 0; i < 8001; i++)
        if (max < freq[i]) max = freq[i];

    int x = distance(freq, find(freq, freq + 8001, max));

    if (*find(freq + x + 1, freq + 8001, max)) cout << distance(freq, find(freq + x + 1, freq + 8001, max)) - 4000 << endl;
    else cout << x - 4000 << endl;
}

// 범위값
void range(int arr[], int N)
{
    cout << arr[N - 1] - arr[0] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    mean(arr, N);
    median(arr, N);
    mode(arr, N);
    range(arr, N);

    return 0;
}