#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

ll fun(int a, int b, int c, int x)
{
    return (a*x*x+b*x+c);
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int a, b, c, d, L, counter;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &L), a||b||c||d||L)
    {
        counter = 0;
        for(int i=0; i<=L; i++)
        {
            if(fun(a,b,c,i)%d==0)
                counter++;
        }
        cout << counter << endl;
    }
    //system( "notepad.exe out.txt");
    return 0;
}
