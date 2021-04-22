#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int n,k, sum, rem;
    while(scanf("%d %d", &n, &k)!= EOF)
    {
        sum = 0;
        sum += n;
        while(n>=k)
        {
            rem = n%k;
            n = n/k;
            sum += n;
            n += rem;
        }
        cout<<sum<<endl;
    }
    return 0;
}
