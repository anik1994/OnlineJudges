#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

struct url
{
    string str;
    int rel;
};
bool compareTwoUrl(url a, url b)
{
    return a.rel > b.rel;
}
int main()
{
    int t, tempRel;
    string tempUrl;
    vector<url> vct;
    url tempStru;

    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin>> tempUrl;
            tempStru.str = tempUrl;

            cin >> tempRel;
            tempStru.rel = tempRel;

            vct.pb(tempStru);
        }
        sort(vct.begin(), vct.end(),compareTwoUrl);

        tempRel = vct[0].rel;

        cout << "Case #" << i << ":" << endl;
        for(int k=0; k<vct.size();k++)
        {
            if(vct[k].rel==tempRel)
                cout << vct[k].str << endl;
        }
        vct.clear();
    }
    //system( "notepad.exe out.txt");
    return 0;
}
