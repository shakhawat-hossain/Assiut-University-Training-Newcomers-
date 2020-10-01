#include <bits/stdc++.h>
using namespace std;

main()
{
    int x, y;
    cin >> x >> y;
    unsigned long long int result = 0;

    for (int i = 1; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            result = result + pow(x, i);
        }
    }
    cout << result;
}