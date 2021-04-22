#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t;
    while(cin >> t)
    {
        int a, sum = 0;
        for(int i = 1; i<=5; i++)
        {
            cin >> a;
            if(a == t)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

