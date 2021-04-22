#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    ll x;
    stack<int> s;
    int rem, counter;
    while(cin>>x && x!=0)
    {
        counter = 0;
        while(x!=0)
        {
            rem = x%2;
            s.push(rem);
            x=x/2;
        }
        cout << "The parity of ";
        while(!s.empty())
        {
            int p = s.top();
            counter += p;
            cout << p;
            s.pop();
        }
        cout << " is "<< counter <<" (mod 2)."<< endl;
    }
    return 0;
}
