#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

ll giveSum(ll n)
{
    ll sum = 0;
    while(n!=0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

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
            sum += (ll)(str[i]-'0');
        }

        ll counter = 1;
        while(sum>9)
        {
            sum = giveSum(sum);
            counter++;
        }

        if(sum%9 == 0)
        {
            cout << str << " is a multiple of 9 and has 9-degree " << counter << "." << endl;
        }
        else
            cout << str << " is not a multiple of 9." << endl;
    }
    //system( "notepad.exe out.txt");
    return 0;
}
