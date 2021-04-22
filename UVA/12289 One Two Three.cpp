#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n;
    cin >> n;
    getchar();
    while(n--)
    {
        string str;
        cin >> str;
        int len = str.length();
        if(len == 5)
            cout << "3";
        else if(len==3 && ((str[0] == 'o' && str[1] == 'n')||(str[1] == 'n' && str[2] == 'e')||(str[0] == 'o' && str[2] == 'e')))
            cout << "1";
        else
            cout << "2";
        cout << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
