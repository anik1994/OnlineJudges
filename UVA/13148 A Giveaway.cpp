#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    ll n;

    while(scanf("%lld", &n) && n)
    {
        if(n==1|| n==64|| n==729|| n==4096|| n==15625|| n==46656|| n==117649|| n==262144|| n==531441|| n==1000000|| n==1771561|| n==2985984|| n==4826809|| n==7529536|| n==11390625|| n==16777216|| n==24137569|| n==34012224|| n==47045881|| n==64000000 || n==85766121)
            printf("Special\n");
        else
            printf("Ordinary\n");

        /*ll sq = sqrt(n);
        ll cb = cbrt(n);

        if(sq*sq == cb*cb*cb && sq*sq == n && cb*cb*cb == n)
            printf("Special\n");
        else
            printf("Ordinary\n");*/
    }

    //system("notepad.exe out.txt");
    return 0;
}
