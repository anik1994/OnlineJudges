#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int x;

    while(cin>>x && x!=0)
    {
        if(x<=100)
            cout<<"f91("<<x<<") = 91"<<endl;
        else
            cout<<"f91("<<x<<") = "<<x-10<<endl;
    }
    return 0;
}
