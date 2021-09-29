#include <bits/stdc++.h>

using namespace std;

int main() {
    int index_str[26];
    fill_n(index_str, 26, -1);
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string str;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (index_str[alphabet.find(str[i])] == -1) {
            index_str[alphabet.find(str[i])] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", index_str[i]);
    }
    printf("\n");

    return 0;
}