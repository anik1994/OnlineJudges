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
    string res="";
    while(getline(cin,str))
    {
        int len = str.size();
        for(int i=0; i<len; i++)
        {
            if(str[i]=='1' || str[i]=='0' || str[i]=='-')
                res += str[i];
            else if(str[i]>='A' && str[i]<='C')
                res += '2';
            else if(str[i]>='D' && str[i]<='F')
                res += '3';
            else if(str[i]>='G' && str[i]<='I')
                res += '4';
            else if(str[i]>='J' && str[i]<='L')
                res += '5';
            else if(str[i]>='M' && str[i]<='O')
                res += '6';
            else if(str[i]>='P' && str[i]<='S')
                res += '7';
            else if(str[i]>='T' && str[i]<='V')
                res += '8';
            else if(str[i]>='W' && str[i]<='Z')
                res += '9';
        }
        cout << res << endl;
        res = "";
    }

    //system("notepad.exe out.txt");
    return 0;
}
