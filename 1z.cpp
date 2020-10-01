#include <bits/stdc++.h>
using namespace std;

main()
{
    unsigned long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    unsigned long long int e, f;

    e = pow(a, b);
    f = pow(c, d);

    if (e > f)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}