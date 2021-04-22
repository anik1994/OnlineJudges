#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y;
        cin >> x >> y;

        if(x>y)
            cout << ">" <<endl;
        else if (x<y)
            cout << "<" <<endl;
        else
            cout << "=" <<endl;
    }
    return 0;
}
