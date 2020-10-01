#include <bits/stdc++.h>
using namespace std;

main()
{
    string inStr;

    cin >> inStr;

    for (int i = 0; i < inStr.size(); i++)
    {
        if (inStr[i] == 44)
        {
            inStr[i] = 32;
        }
    }
}