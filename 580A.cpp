#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;


    int countMax = 0;
    int count = 0;
    int max = 0;

    vector<int> as;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        
        if (a >= max)
        {
            count++;
            max = a;
        }
        else if (count > countMax)
        {
            countMax = count;
            count = 1;
            max = a;
        }

        as.push_back(a);
    }

    if (count > countMax)
    {
        countMax = count;
    }

    cout << countMax << endl;


}