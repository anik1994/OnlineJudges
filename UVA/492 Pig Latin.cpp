#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    string input;

    while(getline(cin,input))
    {
        int len = input.length();
        string temp = "", res = "";
        bool needAddition = false;
        for(int i=0; i<len; i++)
        {
            if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U')
            {
                res += input[i];
                temp = "ay";
                i++;
                needAddition = true;
            }
            else if(input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')
            {
                temp += input[i];
                temp += "ay";
                i++;
                needAddition = true;
            }
            while(input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')
            {
                res += input[i];
                i++;
            }
            if(needAddition)
            {
                res += temp;
                temp = "";
                needAddition = false;
            }
            res += input[i];
        }

        cout << res << endl;
    }
    return 0;
}
