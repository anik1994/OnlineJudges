#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string s;
    bool isOpening = true;
    while(getline(cin,s))
    {
        for(int i=0;i<s.length(); i++)
        {
            if(s[i]=='"')
            {
                if(isOpening)
                {
                   s[i]='\`';
                   s.insert(i,"`");
                   isOpening = false;
                }
                else
                {
                   s[i]='\'';
                   s.insert(i,"'");
                   isOpening = true;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
