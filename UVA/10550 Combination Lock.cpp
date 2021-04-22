#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int ini, no1, no2, no3, res;
    while(cin >> ini >> no1 >> no2 >> no3, ini|no1|no2|no3)
    {
        res = 720;

        if(ini < no1)
            res += ((ini+(40-no1))*9);
        else
            res += ((ini-no1)*9);

        res += 360;

        if(no2 < no1)
            res += (((40-no1)+no2)*9);
        else
            res += ((no2-no1)*9);

        if(no2 < no3)
            res += ((no2+(40-no3))*9);
        else
            res += ((no2-no3)*9);
        cout << res << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
    /*
    5 25 30 15
    10 5 7 15
    0 0 0 0
    */
