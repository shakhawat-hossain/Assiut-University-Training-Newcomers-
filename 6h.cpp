#include <bits/stdc++.h>
#define max 1000007
#define ll long long int
using namespace std;
int main()
{
    ll a, b, temp;
    double lcm;
    cin >> a >> b;
    temp = __gcd(a, b);
    lcm = ((double)a / (double)temp) * (double)b;
    cout << temp << " " << (ll)lcm << endl;
    return 0;
}