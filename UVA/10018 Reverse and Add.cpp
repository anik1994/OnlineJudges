#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

ll rev(ll a)
{
    ll b = 0,mul = 10;
    while(a!=0)
    {
        b = ((b*mul)+(a%10));
        a /= 10;
    }
    return b;
}
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    scanf("%d", &t);

    while(t--)
    {
        ll p;
        scanf("%lld", &p);
        int counter = 0;
        while(p != rev(p))
        {
            ll rN = rev(p);
            p += rN;
            counter++;
        }
        printf("%d %lld\n", counter,p);
    }

    //system("notepad.exe out.txt");
    return 0;
}
