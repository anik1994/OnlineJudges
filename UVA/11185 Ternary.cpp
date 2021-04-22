#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    ll x;
    stack<int> s;
    while(cin>>x && x>=0)
    {
        if(x == 0)
            cout<<"0";
        while(x!=0)
        {
            int temp = x%3;
            s.push(temp);
            x = x/3;
        }
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}
