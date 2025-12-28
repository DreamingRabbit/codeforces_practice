#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    int max = 0;
    int min = 101;
    int pos_max = 0;
    int pos_min = 0;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if (a > max)
        {
            max = a;
            pos_max = i;
        }

        if (a <= min)
        {
            min = a;
            pos_min = i;
        }

        arr.push_back(a);
    }

    int count = pos_max - 1 + n - pos_min;

    if (pos_max > pos_min)
    {
        count--;
    }

    cout << count << endl;


}