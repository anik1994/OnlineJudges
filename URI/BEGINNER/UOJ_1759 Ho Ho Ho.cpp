#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string str = "Ho";

    for(int i = 0; i<t; i++)
    {
        cout<<str;
        if(i != t-1)
            cout<<" ";
    }
    cout<<"!"<<endl;

    return 0;
}
