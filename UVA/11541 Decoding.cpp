#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    cin.ignore(256,'\n');

    for(int i=1; i<=t; i++)
    {
        string str;
        getline(cin,str);

        vector<pair<char,int>> vct;

        char ch;
        string te="";
        int len = str.length();

        for(int i=0; i<len; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                ch = str[i];
                i++;
                while((str[i]>='0' && str[i]<='9') && i<len)
                {
                    te+=str[i];
                    i++;
                }
                vct.pb(make_pair(ch,stoi(te)));
                i--;
                te="";
            }
        }

        string res = "";
        int si = vct.size();
        for(int i=0;i<si;i++)
        {
            for(int j=0;j<vct[i].second;j++)
            {
                res+=vct[i].first;
            }
        }
        cout <<"Case "<<i <<": "<<res << endl;
        vct.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}
