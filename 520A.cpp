#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, bool> alphabet;

    for (int i = 0; i < 26; i++)
    {
        alphabet['a'+i] = false;
    }

    string str;
    cin >> str;

    for (char c : str)
    {
        c = tolower(c);
        alphabet[c] = true;
    }

    for(int i = 0; i < 26; i++)
    {
        if (alphabet['a' + i] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;

}