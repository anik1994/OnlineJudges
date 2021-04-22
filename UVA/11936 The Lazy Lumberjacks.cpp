#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if(x+y>z && y+z>x && z+x>y)
            cout << "OK" << endl;
        else
            cout << "Wrong!!" << endl;
    }
    return 0;
}
