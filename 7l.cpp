#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;

    long long int inArr[n], sum = 0;

    while (n--)
    {
        cin >> inArr[n];

        sum = sum + inArr[n];
    }

    cout << sum;
}