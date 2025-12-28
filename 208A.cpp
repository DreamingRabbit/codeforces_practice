#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s; 
    cin >> s;

    s = regex_replace(s, regex("(WUB)+"), " ");
    s = regex_replace(s, regex("^ +| +$"), "");

    cout << s << endl;
    return 0;
}