#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int k;
    while(cin >> k, k)
    {
        int n, m, x, y;
        cin >> n >> m;
        while(k--)
        {
            cin >> x >> y;

            if(x==n || y==m)
                cout << "divisa";
            else if(x>n && y>m)
                cout << "NE";
            else if(x<n && y>m)
                cout << "NO";
            else if(x>n && y<m)
                cout << "SE";
            else
                cout << "SO";
            cout << endl;
        }
    }

    //system("notepad.exe out.txt");
    return 0;
}
