#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll x;
    cin >> x;
    int idx = 0;
    int n = 0;
    while (x)
    {
        n += (x % 10) * pow(2, idx);
        idx++;
        x /= 10;
    }
    cout << n;
    return 0;
}