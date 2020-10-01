#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    cin >> number;
    if (number > 2)
    {
        cout << 0 << " " << 1 << " ";
        for (i = 2; i < number; ++i) //loop starts from 2 because 0 and 1 are already printed
        {
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
    }
    else if (number == 1)
    {
        cout << 0;
    }
    else if (number == 2)
    {
        cout << 0 << " " << 1;
    }

    return 0;
}