#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void solve()
{
    int n, x;
    
    cin >> n >> x;

    vector<int> a(n);
    bool pres[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        pres[i] = false;

        if (a[i] < n)
        {
            pres[i] = true;
        }
    }

    sort(a.begin(), a.end());

    // find duplicates
    for(int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {  
            while(a[i+1] + x < n && pres[a[i+1] + x])
            {
                a[i+1] += x;
                pres[a[i+1]] = true;
            }
        }
    }

    sort(a.begin(), a.end());

    // find the first missing number
    for(int i = 0; i < n; i++)
    {
        if (a[i] != i)
        {
            cout << i << endl;
            return;
        }
    }

    cout << n << endl;
    return;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        solve();
    }
}