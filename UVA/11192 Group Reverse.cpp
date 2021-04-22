#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int x,counter,groupLen;
    string str;
    stack<char> st;

    while(cin>>x && x!=0)
    {
        getchar();
        getline(cin,str);
        int len = str.length();
        groupLen = len/x;

        for(int i=0,counter=0; i<len; i++)
        {
            st.push(str[i]);
            counter++;
            if(counter==groupLen)
            {
                counter = 0;
                while(!st.empty())
                {
                    cout<<st.top();
                    st.pop();
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
