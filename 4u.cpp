#include <bits/stdc++.h>
using namespace std;

int findSmallestElement(int arr[], int n)
{

    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (temp > arr[i])
        {
            temp = arr[i];
        }
    }
    return temp;
}

main()
{
    string inString;

    cin >> inString;

    int counter[5] = {0};

    for (int i = 0; i < inString.size(); i++)
    {
        inString[i] = tolower(inString[i]);
        if (inString[i] == 'e')
        {
            counter[0]++;
        }
        else if (inString[i] == 'g')
        {
            counter[1]++;
        }
        else if (inString[i] == 'p')
        {
            counter[2]++;
        }
        else if (inString[i] == 't')
        {
            counter[3]++;
        }
        else if (inString[i] == 'y')
        {
            counter[4]++;
        }
    }

    int count = findSmallestElement(counter, 5);
    cout << count;
}