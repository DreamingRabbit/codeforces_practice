#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int ab = a * b;
    int ac = a * c;
    int bc = b * c;
    int abc = a * b * c;

    int max = abc;

    if (a + b + c > max)
    {
        max = a + b + c;
    }

    if (a + bc > max)
    {
        max = a + bc;
    }

    if (ab + c > max)
    {
        max = ab + c;
    }

    if (ac + bc > max)
    {
        max = ac + bc;
    }

    if (ab + ac > max)
    {
        max = ab + ac;
    }

    cout << max << endl;

}