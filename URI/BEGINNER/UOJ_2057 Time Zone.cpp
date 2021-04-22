#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int s, t, f;
    while(cin >> s >> t >> f)
    {
        int res = s + t + f;

        if(res < 0)
            cout << 24 + res << endl;
        else if (res <24)
            cout << res << endl;
        else
            cout << res - 24 << endl;
    }
    return 0;
}

