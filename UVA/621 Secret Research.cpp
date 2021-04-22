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
    cin >> t;
    getchar();
    while(t--)
    {
        string str;
        getline(cin, str);
        int len = str.length();
        if(str == "1" || str == "4" || str == "78")
            cout << "+";
        else if(str[len-2]=='3' && str[len-1]=='5')
            cout << "-";
        else if(str[0]=='9' && str[len-1]=='4' || str[0]=='9')
            cout << "*";
        else //if(len>2 && str[0]=='1' && str[1]=='9' && str[2]=='0' )
            cout << "?";
        cout << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
    /*
    17
    9
    90
    91
    92
    93
    94
    95
    96
    97
    98
    99
    10
    193
    456
    1933
    190
    4125
    */
