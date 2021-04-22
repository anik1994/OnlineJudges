#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll num1, num2;
    while(scanf("%lld %lld", &num1, &num2) != EOF)
    {
        ll result = abs(num1-num2);
        cout << result << endl;
    }
    return 0;
}
