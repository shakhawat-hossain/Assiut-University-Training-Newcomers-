#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, m, i, j = 0;
    cin >> n >> m;
    int a[n + 2], b[n - 2];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i];
    for (i = 0; i < n and j < m; i++)
    {
        if (a[i] != b[j])
            continue;
        j++;
    }
    if (j == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}