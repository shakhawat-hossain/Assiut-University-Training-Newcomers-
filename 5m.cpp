#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        if (i == j)
            res++;
    }
    return res;
}

int main()
{
    int elements;
    cin >> elements;

    int arr[elements];

    if (elements != 0)
    {
        while (elements--)
        {
            cin >> arr[elements];
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << countDistinct(arr, n);
    }
    else
    {
        cout << 0;
    }
}
