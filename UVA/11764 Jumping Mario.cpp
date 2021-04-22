#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t, n, current, previous, h, l;
    cin>>t;

    for(int p=1; p<=t; p++)
    {
        h=0,l=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>current;
            if(i==1)
                previous = current;
            else
            {
                if(previous>current)
                    l++;
                else if(previous<current)
                    h++;
                previous = current;
            }
        }
        cout<<"Case "<<p<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
