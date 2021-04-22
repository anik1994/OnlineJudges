#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int x, y, z;
    vector<int> vct;

    while(cin>>x>>y>>z && x!=0 && y!=0 && z!=0)
    {
        vct.pb(x);
        vct.pb(y);
        vct.pb(z);
        sort(vct.begin(),vct.end());

        if(vct[2]*vct[2]==vct[1]*vct[1]+vct[0]*vct[0])
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
        vct.clear();
    }
    return 0;
}
