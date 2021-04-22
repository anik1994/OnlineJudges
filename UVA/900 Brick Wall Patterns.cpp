#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int x;

    while(cin>>x && x!=0)
    {
        vector<ll> vct;
        vct.pb(1);
        vct.pb(1);
        for(int i=1; i<x; i++)
        {
            ll x = vct[i-1]+vct[i];
            vct.pb(x);
        }
        cout << vct[x] <<endl;
        vct.clear();
    }
    return 0;
}
