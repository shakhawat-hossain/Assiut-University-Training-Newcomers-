#include <bits/stdc++.h>
using namespace std;

main()
{
    string inStr;
    cin >> inStr;

    int count1 = 0, count2 = 0, count3 = 0, countplus = 0;

    for (int i = 0; i < inStr.size(); i++)
    {
        if (inStr[i] == 43)
        {
            countplus++;
        }
        else if (inStr[i] == 49)
        {
            count1++;
        }
        else if (inStr[i] == 50)
        {
            count2++;
        }
        else if (inStr[i] == 51)
        {
            count3++;
        }
    }

    while (count1--)
    {
        cout << "1";
        if (countplus != 0)
        {
            cout << "+";
            countplus--;
        }
    }

    while (count2--)
    {
        cout << "2";
        if (countplus != 0)
        {
            cout << "+";
            countplus--;
        }
    }

    while (count3--)
    {
        cout << "3";
        if (countplus != 0)
        {
            cout << "+";
            countplus--;
        }
    }
}