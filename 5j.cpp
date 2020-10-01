#include <bits/stdc++.h>
using namespace std;

main()
{
    int num, temp;
    cin >> num;
    temp = num;

    double inArr[num], sum = 0, avg;

    while (num--)
    {
        cin >> inArr[num];
        sum = sum + inArr[num];
    }

    avg = sum / temp;
    printf("%.7f\n", avg);
}