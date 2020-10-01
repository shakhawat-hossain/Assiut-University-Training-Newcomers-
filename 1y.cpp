#include <bits/stdc++.h>
using namespace std;

main()
{
    long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    int result = (a * b * c * d) % 100;

    if (result < 10)
    {
        cout << 0;
    }
    cout << result;
}
