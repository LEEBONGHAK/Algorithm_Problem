#include <iostream>

using namespace std;

int main()
{
    int max = 0, index = 0;
    int num_alphabet[26] = { 0, };
	string compare = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
	string str;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {

        str[i] = toupper(str[i]);
        num_alphabet[compare.find(str[i])]++;
    }

    for (int i = 0; i < 26; i++) {
        
        if (num_alphabet[i] == 0)
            continue;

        if (max == num_alphabet[i]) {

            index = 26;
        }
        else if (max < num_alphabet[i]) {

            max = num_alphabet[i];
            index = i;
        }
    }

    cout << compare[index] << endl;

	return 0;
}