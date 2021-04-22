#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t,n,k,p;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n>>k>>p;
        int temp = p%n;
        if(k+temp > n)
            cout<<"Case "<<i<<": "<<((k+temp)-n)<<endl;
        else
            cout<<"Case "<<i<<": "<<(k+temp)<<endl;
    }
    return 0;
}
