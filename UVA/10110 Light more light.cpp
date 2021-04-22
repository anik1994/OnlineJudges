//https://www.algorithmist.com/index.php/UVa_10110
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    ll x;
    while(cin>>x && x!=0)
    {
        ll n = sqrt(x);
        if(n*n!=x)
            cout << "no" << endl;
        else
            cout << "yes" <<endl;
    }
    return 0;
}
