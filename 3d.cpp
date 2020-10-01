#include <bits/stdc++.h>
using namespace std;

main()
{
    int m;
    cin >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];

        if (arr[i] < 11)
        {
            cout << "A[" << i << "]"
                 << " "
                 << "="
                 << " " << arr[i] << endl;
        }
    }
}