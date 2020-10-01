#include <bits/stdc++.h>
using namespace std;

main()
{
    char a;

    cin >> a;

    if (a > 47 && a < 58)
    {
        cout << "IS DIGIT";
    }
    else if (a > 64 && a < 91)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
}