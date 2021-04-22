#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t, temp, sum, len, s = 1;
    vector<int> vct;
    while(cin>>t && t!=0)
    {
        sum = 0;
        for(int i=0;i<t;i++)
        {
            cin>>temp;
            sum += temp;
            vct.pb(temp);
        }
        len = sum/t;
        sum = 0;
        for(int i=0;i<t;i++)
        {
            if(vct[i]>len)
                sum += (vct[i]-len);
        }
        cout << "Set #" << s <<endl;
        s++;
        cout << "The minimum number of moves is " << sum << "." <<endl;
        cout << endl;
        sum = 0;
        vct.clear();
    }
    return 0;
}
