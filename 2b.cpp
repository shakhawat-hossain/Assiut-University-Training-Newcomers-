#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;

    cin >> n;

    if (n != 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }
    else
    {
        cout << -1;
    }
}