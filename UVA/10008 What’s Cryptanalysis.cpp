#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

bool comp(pair<char,int> a, pair<char,int> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return (a.second>b.second);
}
bool isChar(char ch)
{
    if(ch>='A'&& ch<='Z' || ch>='a'&& ch<='z')
        return true;
    return false;
}
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    cin.ignore();

    unordered_map<char,int> m;
    while(t--)
    {
        string str;
        getline(cin,str);
        int len = str.length();

        for(int i=0;i<len;i++)
        {
            if(isChar(str[i]))
                m[(char)toupper(str[i])]++;
            //str[i]>='A'&&str[i]<='Z'?m[str[i]]++:m[(char)toupper(str[i])]++;
        }
    }
    unordered_map<char,int> :: iterator it;
    vector<pair<char,int>> vct;

    for(it=m.begin();it!=m.end();it++)
        vct.pb(*it);

    sort(vct.begin(),vct.end(),comp);
    for(int i=0;i<vct.size();i++)
        cout<<vct[i].first<<" "<<vct[i].second<<endl;



    //system("notepad.exe out.txt");
    return 0;
}
