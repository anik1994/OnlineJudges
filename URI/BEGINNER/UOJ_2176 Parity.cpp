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
    cin >> str;

    int t = count(str.begin(),str.end(),'1');
    if(t%2==0)
    {
        str += "0";
        cout << str << endl;
    }
    else
    {
        str += "1";
        cout << str << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
