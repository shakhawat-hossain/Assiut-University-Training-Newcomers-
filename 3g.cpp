#include <iostream>
using namespace std;

int palindrome(int arr[], int begin, int end)
{
    // base case
    if (begin >= end)
    {
        return 1;
    }
    if (arr[begin] == arr[end])
    {
        return palindrome(arr, begin + 1, end - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cin >> num;

    int a[num];

    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    int n = sizeof(a) / sizeof(a[0]);

    if (palindrome(a, 0, n - 1) == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
