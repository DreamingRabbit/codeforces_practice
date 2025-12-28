#include <iostream>

using namespace std;


bool solve(int x, int y)
{
    int start_x = 0;
    int start_y = 0;

    while(start_x != x)
    {
        if (start_x > x)
        {
            start_x = start_x - 1;
        }
        else
        {
            start_x = start_x + 1;
        }
        start_y--;
        y--;
    }

    if (start_y <= y || abs(y-start_y) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (solve(x,y))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}