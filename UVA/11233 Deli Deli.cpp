#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

struct dic
{
    string sin;
    string plu;
};

bool found(vector<dic> x, string str)
{
    for(int j =0; j<x.size(); j++)
    {
        if(x[j].sin == str)
        {
            cout << x[j].plu << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int l, n;
    cin >> l >> n;
    getchar();

    string tempStr;
    dic tempStruct;
    vector<dic> vct;

    for(int i=0; i<l; i++)
    {
        cin >> tempStr;
        tempStruct.sin = tempStr;
        cin >> tempStr;
        tempStruct.plu = tempStr;
        vct.pb(tempStruct);
    }
    for(int i=0; i< n; i++)
    {
        cin >> tempStr;
        int len= tempStr.length();

        if(found(vct, tempStr))
        {
            continue;
        }
        else if(tempStr[len-1]=='y' && tempStr[len-2]!='a' && tempStr[len-2]!='e' && tempStr[len-2]!='i' && tempStr[len-2]!='o' && tempStr[len-2]!='u')
        {
            tempStr[len-1]='i';
            tempStr += "es";
            cout << tempStr << endl;
        }
        else if(tempStr[len-1]=='o' || tempStr[len-1]=='s' || tempStr[len-1]=='x' || (tempStr[len-1]=='h' && (tempStr[len-2]=='c' || tempStr[len-2]=='s')))
        {
            tempStr += "es";
            cout << tempStr << endl;
        }
        else
        {
            tempStr += "s";
            cout << tempStr << endl;
        }

    }
    //system( "notepad.exe out.txt");
    return 0;
}
