//there is a better solution using O(1)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll n;
    while(cin >> n && n>=0)
    {
        ll counter = 1;
        for(ll i = 1; i<=n; i++)
            counter += i;
        cout << counter << endl;
    }
    //system( "notepad.exe out.txt");
    return 0;
}
