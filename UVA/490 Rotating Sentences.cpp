#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    string str;
    int maxLen = -1;
    vector<string> vct;
    char result[1000][1000];
    while(getline(cin,str))
    {
        int len = str.length();
        if(len>maxLen)
            maxLen = len;
        vct.pb(str);
    }

    for(int i=vct.size()-1,k=0;i>=0;i--,k++)
    {
        int tempLen = vct[i].length();
        for(int j=0; j<maxLen; j++)
        {
            if(j<tempLen)
                result[j][k] = vct[i][j];
            else
                result[j][k] = ' ';
        }
    }
    for(int i=0; i<maxLen;i++)
    {
        for(int j=0; j<vct.size(); j++)
        {
            cout << result[i][j];
        }
        cout<<endl;
    }

    vct.clear();
    //result.clear();
    return 0;
}
