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

    string str;
    set<string> vct;
    while(getline(cin,str))
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        string temp = "";
        int len = str.size();
        for(int i=0; i<len; i++)
        {
            if(str[i]>='a' && str[i]<='z')
                temp += str[i];
            else
            {
                vct.insert(temp);
                temp = "";
            }
        }
        if(temp!="")
        {
            vct.insert(temp);
            temp = "";
        }
    }
    set<string>::iterator it;

    for(it=vct.begin(); it!=vct.end(); it++)
    {
        if(*it!="")
            cout << *it << endl;
    }
    //system("notepad.exe out.txt");
    return 0;
}
