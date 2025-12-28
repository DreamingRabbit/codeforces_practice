#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    for(long long i = 1; i <=n ; i++)
    {
        if (i % 2)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    cout << sum << endl;
}