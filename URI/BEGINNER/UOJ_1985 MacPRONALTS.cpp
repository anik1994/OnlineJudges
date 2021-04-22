#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector <char> vec;
int main()
{
    int t;
    while(cin >> t)
    {
        ll x, y;
        double sum = 0;
        while(t--)
        {
            cin >> x >> y;
            sum += ((x%1000)+.5)*y;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}

