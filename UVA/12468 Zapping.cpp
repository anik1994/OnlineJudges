#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int a, b;
    while(cin >> a >> b, a>=0 && b>=0)
    {
        if(a>b)
            swap(a,b);
        if((b-a)<(a+(100-b)))
            cout << (b-a);
        else
            cout << (a+(100-b));
        cout << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
