#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

bool vowelCheck(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;

    return false;
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

    while(t--)
    {
        string str1,str2;
        getline(cin,str1);
        getline(cin,str2);

        if(str1.length()!=str2.length())
            cout<<"No"<<endl;
        else
        {
            int len1 = str1.length();
            bool isFound = true;
            for(int i=0;i<len1;i++)
            {
                if(str1[i]!=str2[i])
                {
                    if(vowelCheck(str1[i]))
                    {
                        if(!vowelCheck(str2[i]))
                        {
                            cout<<"No"<<endl;
                            isFound = false;
                            break;
                        }
                    }
                    else
                    {
                        cout<<"No"<<endl;
                        isFound = false;
                        break;
                    }
                }
            }
            if(isFound)
                cout<<"Yes"<<endl;
        }
    }

    //system("notepad.exe out.txt");
    return 0;
}
