#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    vector<int> vct;
    cin >> t;
    while(t--)
    {
        int n, temp;
        cin >> n;
        while(n--)
        {
            cin >> temp;
            vct.pb(temp);
        }
        sort(vct.begin(),vct.end());
        int dis = 0;
        int len = vct.size();
        for(int i=1; i<len;i++)
        {
            dis += vct[i]-vct[i-1];
            if(i==len-1)
                dis += (vct[i]-vct[0]);
        }
        cout << dis << endl;
        vct.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}
