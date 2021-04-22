#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int t;
    cin >> n;
    while(n--)
    {
        cin >> t;
        if( t < 2015)
            cout<<(2015 - t)<<" D.C."<<endl;
        else
            cout<<(t-2014)<<" A.C."<<endl;
    }
    return 0;
}
