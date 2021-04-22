#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        vector <int> vct;
        int x;
        for(int j =1; j<=3; j++)
        {
            cin >> x;
            vct.push_back(x);
        }

        sort(vct.begin(),vct.end());

        cout << "Case " << i << ": " << vct[1]<<endl;
    }
    return 0;
}
