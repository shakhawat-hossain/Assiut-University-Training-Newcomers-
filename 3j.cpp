#include <bits/stdc++.h>
using namespace std;

main()
{
    int testcase, n, minima = 999999, count = 0;

    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        if (n < minima)
        {
            minima = n;
            count = 1;
        }
        else if (n == minima)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }
}