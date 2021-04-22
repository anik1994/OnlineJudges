#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t; i++)
    {
        int number;
        cin>>number;
        if(number%2 == 0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }

    return 0;
}

