#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

string str;
bool flag;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<char> dq;

    while (1) {
        flag = false;
        getline(cin, str);
        if (str == ".") break;

        int l = str.length();
        for (int i = 0; i < l; i++) {

            if (str[i] == '(' || str[i] == '[') {
                dq.push_back(str[i]);
            } else if (str[i] == ')') {
                if (!dq.empty() && dq.back() == '(') dq.pop_back();
                else {
                    flag = true;
                    break;
                }
            } else if (str[i] == ']') {
                if (!dq.empty() && dq.back() == '[') dq.pop_back();
                else {
                    flag = true;
                    break;
                }
            }
        }

        if (flag || !dq.empty()) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }

        dq.clear();
    }

    return 0;
}