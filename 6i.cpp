#include<bits/stdc++.h>
using namespace std;

main()
{
    unsigned long long int sum = 0, a, b, x;
    cin >> a >> b >> x;
    int i = b / x - (a / x - 1) + 1;

    while (i--)
    {
        sum = sum + x * i;
    }
    cout << sum;
}