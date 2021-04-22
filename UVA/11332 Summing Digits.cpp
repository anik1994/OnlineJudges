#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll n;
    while(cin>>n, n)
    {
        ll sum;
        while(n>9)
        {
            sum = 0;
            while(n!=0)
            {
                sum += (n%10);
                n /= 10;
            }
            n = sum;
        }
        cout << n << endl;
    }
    //system( "notepad.exe out.txt");
    return 0;
}
