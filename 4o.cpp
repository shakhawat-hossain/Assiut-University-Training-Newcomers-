#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, siz, n;
    cin >> n;
    string str = "abcdefghijklmnopqrstuvwxyz";
    char s;
    int ar[26] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> s;
        for (j = 0; j < 26; j++)
        {
            if (s == str[j])
            {
                ar[j]++;
            }
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (ar[i] > 0)
        {
            siz = ar[i];
            for (j = 0; j < siz; j++)
                cout << str[i];
        }
    }
}