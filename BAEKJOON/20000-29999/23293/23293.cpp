#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct playerInfo
{
	int location = 1;
	int itemlist[55]  = {0, };
};

playerInfo players[100001];
int logs[200000], badplayers[100001];
int t, n;
int log_num, player_num, x, y;
char od;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t >> n;
	for (int i = 0; i < t; i++) {
		cin >> log_num >> player_num >> od >> x;

		if (od == 'M') players[player_num].location = x;
		else if (od == 'F') {
			players[player_num].itemlist[x]++;
			if (players[player_num].location != x) logs[log_num]++;
		}
		else if (od == 'C') {
			cin >> y;
			if (players[player_num].itemlist[x] == 0 || players[player_num].itemlist[y] == 0) logs[log_num]++;

			if (players[player_num].itemlist[x] != 0) players[player_num].itemlist[x]--;
			if (players[player_num].itemlist[y] != 0) players[player_num].itemlist[y]--;
		}
		else if (od == 'A') {
			if (players[player_num].location != players[x].location) {
				logs[log_num]++;
				badplayers[player_num]++;
			}
		}
	}

	int cnt = 0;
	for (int i = 1; i < t + 1; i++) {
		if (logs[i] != 0) cnt++;
	}
	cout << cnt << endl;
	if (cnt != 0) {
		for (int i = 1; i < t + 1; i++) {
			if (logs[i] != 0) cout << i << " ";
		}
		cout << endl;
	}

	cnt = 0;
	for (int i = 1; i < n + 1; i++) {
		if (badplayers[i] != 0) cnt++;
	}
	cout << cnt << endl;
	if (cnt != 0) {
		for (int i = 1; i < n + 1; i++) {
			if (badplayers[i] != 0) cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}