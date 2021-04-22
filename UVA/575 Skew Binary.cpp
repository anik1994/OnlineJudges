#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    string str;
    ll digit,sum,len;
    while(getline(cin,str))
    {
        len = str.length();
        if(str == "0")
            break;
        sum = 0;
        for(ll i=len-1, j=1; i>=0; i--, j++)
        {
            digit = (int)str[i] - '0';
            sum += digit*(pow(2,j)-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
