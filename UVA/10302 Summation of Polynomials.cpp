#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    ll x;
    while(cin>>x)
    {
        ll sum = 0;
        for(ll i=1; i<=x; i++)
        {
            sum += (i*i*i);
        }
        cout << sum << endl;
    }
    return 0;
}
