#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        n -= n%3;
        m -= m%3;
        cout << (int)((n*m)/9) << endl;
    }
    //system( "notepad.exe out.txt");
    return 0;
}
