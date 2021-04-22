#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    ll total = 0;
    cin >> t;
    getchar();
    while(t--)
    {
       string str;
       getline(cin,str);
       if(str == "report")
            cout << total << endl;
       else
       {
           int num = 0;
           for(int i=7; i<str.length(); i++)
           {
               num *= 10;
               num += (str[i]-'0');
           }
           total += num;
       }
    }

    //system("notepad.exe out.txt");
    return 0;
}
