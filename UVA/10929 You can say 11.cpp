//https://www.math.hmc.edu/funfacts/ffiles/10013.5.shtml
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string str;
    ll sum;
    while(cin >> str && str != "0")
    {
        sum = 0;
        ll len = str.length();
        for(ll i = 0; i<len; i++)
        {
            if(i%2==0)
                sum += (ll)(str[i]-'0');
            else
                sum -= (ll)(str[i]-'0');
        }
        if(sum%11 == 0)
            cout << str << " is a multiple of 11." << endl;
        else
            cout << str << " is not a multiple of 11." << endl;
    }
    //system( "notepad.exe out.txt");
    return 0;
}
