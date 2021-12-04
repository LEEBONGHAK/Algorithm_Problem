#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 테스트 케이스, 전체 문서 개수, 인쇄 순서를 알고 싶은 문서의 위치, 우선순위
    int N, document_size, document_loc, importance;
    int print_order;	// 인쇄 순서

    cin >> N;
    for (int i = 0; i < N; ++i) {
        print_order = 0;
        queue<pair<int, int>> q;	// index와 value를 동시에 저장할 수 있는 큐
        priority_queue<int> pq; // 우선순위 큐

        cin >> document_size >> document_loc;
        for (int j = 0; j < document_size; j++) {
            cin >> importance;
            q.push({ j, importance });
            pq.push(importance);
        }

        while (!q.empty()) {
            int present_index = q.front().first;
            int present_value = q.front().second;
            q.pop();

            if (pq.top() == present_value) {
                pq.pop();
                print_order++;

                if (present_index == document_loc) {
                    cout << print_order << endl;
                    break;
                }
            }
            else {	// if를 만족하지 않으면 큐의 마지막에 추가
                q.push({ present_index, present_value });
            }
        }
    }

    return 0;
}