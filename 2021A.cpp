#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void solve()
{
    int n;
    
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while(a.size() > 1)
    {
        // sort the array in descending order
        sort(a.begin(), a.end(), greater<int>());

        // sum the last two elements
        int sum = a.back() + a[a.size() - 2];

        // remove the last two elements
        a.pop_back();
        a.pop_back();

        // insert the sum divided by 2
        a.push_back(sum / 2);
    }
    
    cout << a[0] << endl;
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