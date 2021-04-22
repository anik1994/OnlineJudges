#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int GCD(int a, int b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int N;
    while(cin >> N, N)
    {
        ll G=0;
        for(int i=1;i<N;i++)
            for(int j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        cout << G << endl;
    }


    //system( "notepad.exe out.txt");
    return 0;
}
