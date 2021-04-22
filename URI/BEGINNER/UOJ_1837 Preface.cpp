#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin>>a>>b;

    for(int r = 0; r<= abs(b); r++)
    {
        int q = floor((a-r)/b);
        if (a == (b*q)+r)
        {
            cout<<q<<" "<<r<<endl;
            break;
        }
    }

    return 0;
}
