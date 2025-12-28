#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int hundred = n / 100;
    n = n % 100;

    int twenties = n / 20;
    n = n % 20;

    int tens = n / 10;
    n = n % 10;

    int fives = n / 5;
    n = n % 5;

    cout << hundred + twenties + tens + fives + n << endl; 
}