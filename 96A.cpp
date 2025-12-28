#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cin >> str;

    auto prev = str[0];
    int count = 0;
    for(auto a : str)
    {
        if (prev == a)
        {
            count++;
        }
        else
        {
            prev = a;
            count = 0;
        }
        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}