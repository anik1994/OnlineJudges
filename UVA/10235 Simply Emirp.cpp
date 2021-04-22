#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

bool isPrime(ll n)
{
    for (ll p=2; p*p<=n; p++)
    {
        if (n%p == 0)
        {
            return false;
        }
    }
    return true;
}

ll reversell(ll n)
{
    ll x = 0;
    while(n!=0)
    {
        x *= 10;
        x += (n%10);
        n /= 10;
    }
    return x;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");
    ll n;
    while(cin >> n)
    {
        if(isPrime(n) && n!=reversell(n) && isPrime(reversell(n)) && n>9)
            cout << n << " is emirp.";
        else if(isPrime(n))
            cout << n << " is prime.";
        else
            cout << n << " is not prime.";
        cout << endl;
    }
    //system("notepad.exe out.txt");
    return 0;
}
    /*  3
        7
        9
        373
        78887
        999983
    */

