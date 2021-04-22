#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<int> makeBin(ll x)
{
    stack<int> st;
    vector<int> temp;
    for(int i=1;i<=32; i++)
    {
        st.push(x%2);
        x = x/2;
    }
    while(!st.empty())
    {
        temp.pb(st.top());
        st.pop();
    }
    return temp;
}

int main()
{
    vector<int> num1, num2, res;
    ll a, b;
    while(cin >> a >> b)
    {
        num1 = makeBin(a);
        num2 = makeBin(b);

        for(int i = 0; i<num1.size();i++)
        {
            if(num1[i]+num2[i]==1)
                res.pb(1);
            else
                res.pb(0);
        }
        ll sum = 0;
        for(int i = res.size()-1,k=0; i>=0;i--,k++)
        {
            if(res[i]==1)
                sum += pow(2,k);
        }
        cout << sum <<endl;
        num1.clear();
        num2.clear();
        res.clear();
    }
    return 0;
}
