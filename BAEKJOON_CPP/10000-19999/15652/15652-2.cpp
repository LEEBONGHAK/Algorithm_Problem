#include <iostream> 

#define endl '\n'
#define MAX 9 
using namespace std;

int N,M; 
int arr[MAX]; 

void dfs(int num, int k) { 
    if (k == M) // M까지 들어갔을 시 실행 
    { 
        for (auto i = 0; i < M; i++) 
            cout << arr[i] << " "; 
        cout << "\n"; 
    } 
    else // M까지 안 들어갔을 시 
    { 
        for (auto i = num; i <= N; i++) 
        { 
            arr[k] = i; // 값 저장 
            dfs(i, k + 1); // 더 깊게 내려가자 (M까지) 
        } 
    } 
} 

int main() 
{ 
    cin >> N >> M;
    dfs(1, 0); 

    return 0;
}

//출처: https://tooo1.tistory.com/315 [개발자 퉁이리]