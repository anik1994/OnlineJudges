#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");
    ll n;
    while(cin >> n)
    {
        /*a+(r-1)d=n
        =>r=((n-a)/d)+1
        =>r=((n-1)/2)+1
        =>r=(n+1)/2  */
        ll r = (n+1)/2;
        //sum(1+3+5+7+...+r)=r*r
        ll totalOdd = r*r;
        /*a+(r-1)d+a+(r-2)d+a+(r-3)d
        =>3a+(r-1)d+(r-2)d+(r-3)d
        =>3.1+(r-1)2+(r-2)2+(r-3)2
        =>3+2r-2+2r-4+2r-6
        =>6r-9*/
        ll sum = (6*totalOdd)-9;
        cout << sum << endl;
    }
    //system("notepad.exe out.txt");
    return 0;
}
