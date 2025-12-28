#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    map<int, bool> mp;
    for (auto c: str)
    {           
        if (isalpha(c))
        {
 
            mp[c] = true;
        }
    }

    cout << mp.size() << endl;
}