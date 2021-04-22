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

    while(getline(cin,str))
    {
        list<char> lis;
        stack<char> st;
        int len = str.length();
        bool isFont = false;

        for(int i=0; i<len; i++)
        {
            if(str[i]=='[')
            {
                while(!st.empty())
                {
                    lis.push_front(st.top());
                    st.pop();
                }
                isFont = true;
            }
            else if(str[i]==']')
            {
                while(!st.empty())
                {
                    lis.push_front(st.top());
                    st.pop();
                }
                isFont = false;
            }
            else if(isFont)
            {
                st.push(str[i]);
            }
            else
            {
                lis.push_back(str[i]);
            }
        }
        while(!st.empty())
        {
            lis.push_front(st.top());
            st.pop();
        }
        for(auto i=lis.begin(); i!=lis.end(); i++)
            cout << *i;
        cout << endl;
        lis.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}

/*if(str[i]=='[')
            {
                i++;
                while(str[i]!=']'||str[i]!='[')
                {
                    st.push(str[i]);
                    i++;
                    if(i==len)
                        break;
                }
                while(!st.empty())
                {
                    lis.push_front(st.top());
                    st.pop();
                }
            }
            else
            {
                if(str[i]==']')
                    i++;
                while(str[i]!='[')
                {
                    lis.push_back(str[i]);
                    i++;
                    if(i==len)
                        break;
                }
            }*/
