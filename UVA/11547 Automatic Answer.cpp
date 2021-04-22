#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll temp;
        cin >> temp;

        ll result = (temp*315)+36962;
        result = result/10;
        cout << abs(result%10) << endl;
    }
    return 0;
}
