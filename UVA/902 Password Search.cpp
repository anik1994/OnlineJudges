#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

bool comp(pair<string,int> a, pair<string,int> &b)
{
    return (a.second>b.second);
}
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;

    while(cin>>n>>str)
    {
        int len = str.size();
        unordered_map<string,int> m;
        for(int i=0;i<=len-n;i++)
        {
            string temp = str.substr(i,n);
            m[temp]++;
        }

        unordered_map<string,int> :: iterator it;
        vector<pair<string,int>> vct;

        for(it=m.begin();it!=m.end();it++)
            vct.pb(*it);

        sort(vct.begin(),vct.end(),comp);

        cout<<vct[0].first<<endl;

    }

    //system("notepad.exe out.txt");
    return 0;
}
