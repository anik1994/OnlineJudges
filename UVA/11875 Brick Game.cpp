#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t,n,temp;
    cin>>t;
    vector<int> vct;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>temp;
            vct.pb(temp);
        }
        temp = n/2;
        cout<<"Case "<<i<<": "<<vct[temp]<<endl;
        vct.clear();
    }
    return 0;
}
