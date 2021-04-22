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
    vector <char> vct;
    while(cin >> str && str != "#")
    {
        for(int i=0; i<str.length(); i++)
            vct.pb(str[i]);
        if(next_permutation(vct.begin(),vct.end()))
        {
            for(auto i = vct.begin();i!=vct.end();i++)
                printf("%c", *i);
            printf("\n");
        }
        else
            printf("No Successor\n");
        vct.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}
