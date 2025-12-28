#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    map<int, bool> mp1;

    for (int i = 1; i <= n; i++)
    {
        mp1[i] = 0;
    }

    int p;
    
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        mp1[a] = 1;
    }

    int q;
    
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        mp1[a] = 1;
    }

    for (int i = 1; i <= n ;i++)
    {
        if (mp1[i] == 0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

}