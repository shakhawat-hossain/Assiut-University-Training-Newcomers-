
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, i, mn, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        mn = 1e9;
        int arr[n + 2];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        for (i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                x = arr[i] + arr[j] + j - i;
                if (mn > x)
                    mn = x;
            }
        }
        cout << mn << endl;
    }
    return 0;
}