#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if(x>0 && x<=20 && y>0 && y <=20 && z>0 && z<=20)
            cout << "Case " << i << ": good" << endl;
        else
            cout << "Case " << i << ": bad" << endl;
    }
    return 0;
}
