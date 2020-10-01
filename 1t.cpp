#include<bits/stdc++.h>
using namespace std;

main()
{
    int arr[3], sorted_arr[3];

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }

    sort(sorted_arr, sorted_arr + sizeof(sorted_arr)/sizeof(sorted_arr[0]));

    for(int i = 0; i < 3; i++)
    {
        cout << sorted_arr[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}