#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
string decode(string str)
{
    int len = str.length();
    string result;
    for(int i=0; i<len; i++)
    {
        int temp;
        if(str[i]=='1')
        {
            temp = (str[i]-'0')*100+(str[i+1]-'0')*10+(str[i+2]-'0');
            i += 2;
            result += (char)temp;
        }
        else
        {
            temp = (str[i]-'0')*10+(str[i+1]-'0');
            i++;
            result += (char)temp;
        }
    }
    return result;
}
string encode(string str)
{
    int len = str.length();
    queue<int> qu;
    for(int i=0; i<len; i++)
    {
        int temp = str[i];
        while(temp!=0)
        {
            qu.push(temp%10);
            temp = temp/10;
        }
    }
    string result = "";
    while(!qu.empty())
    {
        result += (qu.front()+'0');
        qu.pop();
    }
    return result;
}
int main()
{
    string input;

    while(getline(cin,input))
    {
        string ans;
        reverse(input.begin(),input.end());
        if(input[0]>='0' && input[0]<='9')
        {
            ans = decode(input);
        }
        else
        {
            ans = encode(input);
        }
        cout << ans << endl;
    }
    return 0;
}
