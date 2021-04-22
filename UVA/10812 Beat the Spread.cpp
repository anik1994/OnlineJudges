#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t, x, y, i, j;
    bool found = false;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        for(i=x, j=0; i>=0; i--,j++)
        {
            if(i+j==x && abs(i-j)==y)
            {
                found = true;
                break;
            }
        }
        if(found)
        {
            if(i>j)
                cout<<i<<" "<<j<<endl;
            else
                cout<<j<<" "<<i<<endl;
        }
        else
            cout<<"impossible"<<endl;
        found = false;
    }
    return 0;
}
