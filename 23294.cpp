#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

deque<int> f;
deque<int> b;
int N, Q, p, max_cash, pre_cash, front_cash, total_cash, x;
int cashs[2001];
char od;

void B() {
    if (!b.empty()) {
        front_cash += cashs[p];
        f.push_front(p);
        p = b.back();
        pre_cash -= cashs[p];
        b.pop_back();
    }
}

void F() {
    if (!f.empty()) {
        pre_cash += cashs[p];
        b.push_back(p);
        p = f.front();
        front_cash -= cashs[p];
        f.pop_front();
    }
}

void A(int i) {
    if (p != 0) {
        f.clear();
        total_cash -= front_cash;
        front_cash = 0;
        pre_cash += cashs[p];
        b.push_back(p);

        p = i;
        while (total_cash > max_cash) {
            pre_cash -= cashs[b.front()];
            total_cash -= cashs[b.front()];
            b.pop_front();
        }
    }
    else {
        p = i;
    }
}

void C() {
    deque<int> tp(b);
    int tmp;
    b.clear();
    total_cash -= pre_cash;
    pre_cash = 0;

    while (!tp.empty()) {
        tmp = tp.front();
        if (b.empty() || (b.back() != tmp)) {
            pre_cash += cashs[tmp];
            b.push_back(tmp);
        }
        tp.pop_front();
    }

    total_cash += pre_cash;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> Q >> max_cash;
    for (int i = 1; i <= N; i++)
        cin >> cashs[i];

    for (int i = 0; i < Q; i++) {
        cin >> od;
        if (od == 'B') B();
        else if (od == 'F') F();
        else if (od == 'A') {
            cin >> x;
            total_cash += cashs[x];
            A(x);
        }
        else if (od == 'C') C();
    }

    cout << p << endl;

    if (b.empty()) cout << -1;
    else {
        while (!b.empty()) {
            cout << b.back() << " ";
            b.pop_back();
        }
    }
    cout << endl;
    
    if (f.empty()) cout << -1;
    else {
        while (!f.empty()) {
            cout << f.front() << " ";
            f.pop_front(); 
        }
    }
    cout << endl;

    return 0;
}

/*
참고 자료
https://blockdmask.tistory.com/73
*/