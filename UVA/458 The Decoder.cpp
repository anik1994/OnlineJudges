#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    string str;
    char ch;

    while (getline(cin,str))
    {
        ll len = str.length();

        for(ll i = 0; i<len; i++)
        {
            /*ch = str[i];
            ch -= 7;
            str[i] = ch;*/
            cout << (char)(str[i]-7);
        }
        cout <<endl;
    }
    return 0;
}
