#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

string trim(string s)
{
    string p="";
    int si = s.length();
    for(int i=0; i<si; i++)
    {
        if(s[i]!=' ')
            p += s[i];
    }
    return p;
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
    cin.ignore(256, '\n');

    for(int i=1; i<=t; i++)
    {
        string str1, str2;
        getline(cin,str1);
        getline(cin,str2);

        if(str1==str2)
            cout << "Case "<<i<<": Yes"<< endl;
        else if(trim(str1)==str2)
            cout << "Case "<<i<<": Output Format Error"<< endl;
        else
            cout << "Case "<<i<<": Wrong Answer"<< endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
