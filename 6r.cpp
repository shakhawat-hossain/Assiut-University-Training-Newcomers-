#include <bits/stdc++.h>
using namespace std;

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}

int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << fixed << setprecision(6) << distance(x1, x2, y1, y2);
    return 0;
}
