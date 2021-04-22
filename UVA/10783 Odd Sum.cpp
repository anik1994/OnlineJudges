#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int x,y, sum=0;
        cin >> x >> y;
        if(x%2==0)
            x++;
        for(int j=x; j<=y; j+=2)
        {
            sum += j;
        }
        cout << "Case " << i << ": " << sum <<endl;
    }
    return 0;
}
