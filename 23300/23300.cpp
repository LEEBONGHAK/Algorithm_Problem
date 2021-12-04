#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

deque<int> f;
deque<int> b;
int N, Q, p, x;
char od;

void B() {
	if (!b.empty()) {
		f.push_front(p);
		p = b.back();
		b.pop_back();
	}
}

void F() {
	if (!f.empty()) {
		b.push_back(p);
		p = f.front();
		f.pop_front();
	}
}

void A(int i) {
	if (p != 0) {
		b.push_back(p);
		p = i;
		f.clear();
	}
	else {
		p = i;
	}
}

void C() {
	deque<int> tp(b);
	int tmp;
	b.clear();

	while (!tp.empty()) {
		tmp = tp.front();
		if (b.empty() || (b.back() != tmp)) b.push_back(tmp);
		tp.pop_front();		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> od;
		if (od == 'B') B();
		else if (od == 'F') F();
		else if (od == 'A') {
			cin >> x;
			if (x < 0 || x > 2000) continue;
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